#include <iostream>

// Define our hash function
int hash(int key) {
  return key % 11;
}

int main() {
  // Define our array of buckets
  int buckets[11];

  // Insert 11 distinct integers into our hash table without collusion
  std::cout << "Hash table without collusion:" << std::endl;
  int keys[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  for (int i = 0; i < 11; i++) {
    int key = keys[i];
    int h = hash(key);
    buckets[h] = key;
    std::cout << key << " hashed to bucket " << h << std::endl;
  }

  // Insert 11 distinct integers into our hash table with collusion
  std::cout << "Hash table with collusion:" << std::endl;
  int keys[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  for (int i = 0; i < 11; i++) {
    int key = keys[i];
    int h = hash(key);
    buckets[h] = key;
    std::cout << key << " hashed to bucket " << h << std::endl;
  }

  return 0;
}
