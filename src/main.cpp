#include <iostream>
#include <absl/container/btree_map.h>

int main() {
  // Define a B-tree map with int keys and string values
  absl::btree_map<int, std::string> btreeMap;

  // Insert key-value pairs into the B-tree map
  btreeMap.insert({4, "Apple"});
  btreeMap.insert({2, "Banana"});
  btreeMap.insert({6, "Orange"});
  btreeMap.insert({1, "Mango"});
  btreeMap.insert({3, "Grape"});

  // Access and print values in the B-tree map
  for (const auto& pair : btreeMap) {
    std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
  }

  // Find a value by key
  auto it = btreeMap.find(2);
  if (it != btreeMap.end()) {
    std::cout << "Value found: " << it->second << std::endl;
  } else {
    std::cout << "Value not found." << std::endl;
  }

  return 0;
}