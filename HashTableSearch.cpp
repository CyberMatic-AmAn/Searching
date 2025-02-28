#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> hashTable;

    // Insert key-value pairs
    hashTable[10] = "Apple";
    hashTable[20] = "Banana";
    hashTable[30] = "Cherry";

    // Search for a key
    int key = 20;
    if (hashTable.find(key) != hashTable.end()) {
        cout << "Element found: " << hashTable[key] << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    // Delete a key
    hashTable.erase(10);

    return 0;
}
