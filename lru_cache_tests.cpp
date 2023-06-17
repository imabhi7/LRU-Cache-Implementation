#include "lru_cache.h"

// Unit tests
void runTests()
{
    // Create an LRU Cache with capacity 2
    LRU_Cache lru1(2);

    // Print the size of the LRU Cache
    std::cout << "The size of this LRU Cache is: " << lru1.size() << std::endl;

    // Insert key-value pairs into the LRU Cache
    lru1.insert(1, 10);
    lru1.insert(3, 20);
    lru1.insert(8, 30);

    // Test the get() function by retrieving values using keys
    std::cout << lru1.get(1) << std::endl; // Expected output: 0 (key not found)
    std::cout << lru1.get(3) << std::endl; // Expected output: 20
    std::cout << lru1.get(6) << std::endl; // Expected output: 0 (key not found)
    std::cout << lru1.get(8) << std::endl; // Expected output: 30
}

int main()
{
    // Run the unit tests
    runTests();

    return 0;
}