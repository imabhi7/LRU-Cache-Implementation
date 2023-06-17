#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <iostream>
#include <list>
#include <unordered_map>

// Class representing a key-value pair in the cache
class CacheItem
{
public:
    int key;
    int value;
};

// Class representing the LRU Cache
class LRU_Cache
{
public:
    std::list<CacheItem> cacheList;                                   // Doubly linked list to maintain order of items in the cache
    std::unordered_map<int, std::list<CacheItem>::iterator> cacheMap; // Hash map to store key-value pairs for fast access
    int capacity;                                                     // Maximum capacity of the cache

    // Constructor to initialize the LRU Cache with the given capacity
    LRU_Cache(int cap);

    // Returns the size of the cache (i.e., the capacity)
    int size() const;

    // Inserts a key-value pair into the cache
    void insert(int key, int value);

    // Retrieves the value associated with the given key from the cache
    int get(int key);
};

#endif