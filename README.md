# LRU-Cache-Implementation
LRU Cache is a C++ implementation of a Least Recently Used (LRU) Cache data structure. It provides efficient key-value storage with a fixed capacity, automatically evicting the least recently used items when the cache becomes full.

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

## Usage
To use the LRU Cache in your project, follow the instructions below.

### Constructor
```cpp
LRU_Cache(int cap);
```
- The constructor initializes a new instance of the LRU Cache with the specified capacity (cap).Size

### Size

```cpp
int size() const;
```
- This method returns the current number of items present in the cache.

### Insert

```cpp
void insert(int key, int value);
```
- The insert method adds a key-value pair to the cache. If the cache already contains the key, it updates the value and moves the item to the front. If the cache is full, it removes the least recently used item before inserting the new item.

### Get

```cpp
int get(int key);
```
- The get method retrieves the value associated with the given key from the cache. If the key is found, it updates the item's position in the cache, moving it to the front. If the key is not found, it returns 0.

## Performance Analysis

This section provides a performance analysis of the LRU Cache implementation.

### Time Complexity

The LRU Cache offers efficient time complexity for its operations:

- Insertion and retrieval operations have a time complexity of O(1) on average. The use of an unordered map allows constant-time lookup for key-value pairs.
- The insertion and retrieval operations involve updating the doubly linked list, which has constant time complexity.

### Space Complexity

The space complexity of the LRU Cache is determined by the cache capacity:

- The space complexity of the cache is O(capacity), where capacity is the maximum number of items that can be stored.
- The cache utilizes a doubly linked list to maintain the order of items and an unordered map for fast lookup.
- The space required for the doubly linked list and the unordered map is proportional to the number of items stored in the cache.

## Conclusion

The LRU Cache is a valuable data structure for implementing efficient caching mechanisms. It allows fast insertion, retrieval, and updating of key-value pairs while also limiting the cache size. The provided implementation offers O(1) time complexity for common operations and has a manageable space complexity.
