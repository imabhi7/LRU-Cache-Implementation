# LRU-Cache-Implementation
LRU Cache is a C++ implementation of a Least Recently Used (LRU) Cache data structure. It provides efficient key-value storage with a fixed capacity, automatically evicting the least recently used items when the cache becomes full.

## To compile and run the LRU Cache code:
### Follow these steps:
1. Open a terminal or command prompt and navigate to the directory where you extracted the LRU Cache files.
2. Compile the code using the following command:
```bash
g++ lru_cache.cpp lru_cache_tests.cpp -o lru_cache
```
- This command compiles both lru_cache.cpp and lru_cache_tests.cpp files and creates an executable named lru_cache.
3. Run the compiled executable using the following command:
```bash
./lru_cache_tests
```
- This command executes the lru_cache program, which runs the unit tests for the LRU Cache implementation.
4. You should see the test results and output displayed in the terminal.

## Table of Contents

1. [Introduction](#introduction)
2. [Usage](#usage)
   - [Constructor](#constructor)
   - [Size](#size)
   - [Insert](#insert)
   - [Get](#get)
3. [Performance Analysis](#performance-analysis)
   - [Time Complexity](#time-complexity)
   - [Space Complexity](#space-complexity)
4. [Conclusion](#conclusion)

## Introduction

The LRU Cache implementation consists of two main components: `LRU_Cache` class and `CacheItem` class. The `LRU_Cache` class utilizes a doubly linked list (`cacheList`) and an unordered map (`cacheMap`) for efficient key-value storage and retrieval. The `CacheItem` class represents an individual item in the cache, storing the key and value.

The LRU Cache supports the following operations:
- `size()`: Returns the current number of items in the cache.
- `insert(key, value)`: Inserts a key-value pair into the cache. If the cache is full, it removes the least recently used item before inserting the new item.
- `get(key)`: Retrieves the value associated with the given key from the cache. If the key is not found, it returns 0.

## Usage
To use the LRU Cache in your project, follow the instructions below.

### Constructor
```cpp
LRU_Cache(int cap);
```
- The constructor initializes a new instance of the LRU Cache with the specified capacity (`cap`).

### Size

```cpp
int size() const;
```
- This method returns the current number of items present in the cache.

### Insert

```cpp
void insert(int key, int value);
```
- The `insert` method adds a key-value pair to the cache. If the cache already contains the key, it updates the value and moves the item to the front. If the cache is full, it removes the least recently used item before inserting the new item.

### Get

```cpp
int get(int key);
```
- The `get` method retrieves the value associated with the given key from the cache. If the key is found, it updates the item's position in the cache, moving it to the front. If the key is not found, it returns 0.

## Performance Analysis

This section provides a performance analysis of the LRU Cache implementation.

### Time Complexity

The LRU Cache offers efficient time complexity for its operations:
- Insertion and retrieval operations have a time complexity of O(1) on average. The use of an unordered map allows constant-time lookup.
- The insertion and retrieval operations involve updating the doubly linked list, which has constant time complexity.

### Space Complexity

The space complexity of the LRU Cache is determined by the cache capacity:
- The space complexity of the LRU Cache is O(capacity), where capacity is the specified maximum number of items that can be stored in the cache.
- The cache utilizes a doubly linked list and an unordered map, both of which require space proportional to the number of items stored in the cache.


## Conclusion

The LRU Cache is a valuable data structure for implementing efficient caching mechanisms. It allows fast insertion, retrieval, and updating of key-value pairs while also limiting the cache size. The provided implementation offers O(1) time complexity for common operations and has a manageable space complexity.
