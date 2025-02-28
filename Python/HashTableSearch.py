class HashTable:
    def __init__(self):
        self.table = {}

    def insert(self, key, value):
        self.table[key] = value

    def search(self, key):
        return self.table.get(key, -1)


# Example usage

hash_table = HashTable()
hash_table.insert(10, "Apple")
hash_table.insert(20, "Banana")
hash_table.insert(30, "Cherry")

key = 20
result = hash_table.search(key)
print("Element found:", result)
