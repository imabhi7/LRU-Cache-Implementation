#include "lru_cache.h"

// Constructor initializes the LRU Cache with the given capacity
LRU_Cache::LRU_Cache(int cap) : capacity(cap)
{
    if (capacity <= 0)
    {
        // Print an error message if the capacity is less than or equal to 0
        std::cerr << "ERROR: LRU Capacity must be greater than 0. Please reinitialize the cache." << std::endl;
        std::cerr << "Random behavior will occur since capacity is set to 0." << std::endl;
    }
}

// Returns the size of the cache (i.e., the capacity)
int LRU_Cache::size() const
{
    return capacity;
}

// Inserts a key-value pair into the cache
void LRU_Cache::insert(int key, int value)
{
    if (cacheMap.find(key) != cacheMap.end())
    {
        // Key already exists in the cache, update its value and move it to the front
        cacheList.erase(cacheMap[key]);
    }
    else if (cacheList.size() == capacity)
    {
        // Cache is full, remove the least recently used item from the back
        int lastKey = cacheList.back().key;
        cacheList.pop_back();
        cacheMap.erase(lastKey);
    }

    // Create a new CacheItem and insert it at the front of the cacheList
    CacheItem newItem{key, value};
    cacheList.push_front(newItem);
    cacheMap[key] = cacheList.begin();
}

// Retrieves the value associated with the given key from the cache
int LRU_Cache::get(int key)
{
    if (cacheMap.find(key) != cacheMap.end())
    {
        // Key exists in the cache, update its position in the cacheList and return the value
        CacheItem item = *cacheMap[key];
        cacheList.erase(cacheMap[key]);
        cacheList.push_front(item);
        cacheMap[key] = cacheList.begin();
        return item.value;
    }

    // Key doesn't exist in the cache
    return 0;
}