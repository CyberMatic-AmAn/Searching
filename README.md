# Searching Algorithms in C++ & Python 🔍⚡  

This repository contains **C++ and Python implementations** of various **searching algorithms**. Each algorithm is well-documented, optimized for general use, and includes time complexity analysis. Ideal for **learning, interviews, and competitive programming**! 🚀

## 📌 Included Searching Algorithms  

### **1️⃣ Linear Searching**  
🔹 **Linear Search** – Iterates through the array to find an element (O(n)).  

### **2️⃣ Binary Searching**  
🔹 **Binary Search** – Efficient search for sorted arrays using **divide & conquer** (O(log n)).  
🔹 **Ternary Search** – Similar to binary search but splits into **three** parts (O(log n)).  

### **3️⃣ Interpolation Searching**  
🔹 **Interpolation Search** – Works well on uniformly distributed data (O(log log n) avg).  

### **4️⃣ Jump Searching**  
🔹 **Jump Search** – Faster than linear search; jumps ahead by fixed steps (O(√n)).  
🔹 **Exponential Search** – Starts with small steps, then switches to binary search (O(log n)).  

### **5️⃣ Hashing-Based Search**  
🔹 **Hash Table Search** – Uses **hash functions** for **constant-time lookups** (O(1) avg).  

## 📂 Folder Structure  
```
📂 Searching-Algorithms
│── 📜 linear_search.cpp
│── 📜 binary_search.cpp
│── 📜 ternary_search.cpp
│── 📜 interpolation_search.cpp
│── 📜 jump_search.cpp
│── 📜 exponential_search.cpp
│── 📜 hash_search.cpp
│── 📜 linear_search.py
│── 📜 binary_search.py
│── 📜 ternary_search.py
│── 📜 interpolation_search.py
│── 📜 jump_search.py
│── 📜 exponential_search.py
│── 📜 hash_search.py
│── 📜 README.md  👈 (This file)
```

## ⏳ Time Complexity Comparison  
| Algorithm              | Best Case | Average Case | Worst Case |
|------------------------|----------|-------------|------------|
| **Linear Search**      | O(1)      | O(n)        | O(n)       |
| **Binary Search**      | O(1)      | O(log n)    | O(log n)   |
| **Ternary Search**     | O(1)      | O(log n)    | O(log n)   |
| **Interpolation Search** | O(1)   | O(log log n) | O(n)       |
| **Jump Search**        | O(1)      | O(√n)       | O(√n)      |
| **Exponential Search** | O(1)      | O(log n)    | O(log n)   |
| **Hash Table Search**  | O(1)      | O(1)        | O(n)       |

## 💡 How to Use?  
1️⃣ Clone this repository  
```sh
git clone https://github.com/CyberMatic-AmAn/Searching.git
```  
2️⃣ Compile and run any searching program  
For C++:
```sh
g++ binary_search.cpp -o binary_search
./binary_search
```
For Python:
```sh
python binary_search.py
```

## 📌 Contributions  
Feel free to **fork this repo**, improve the code, and submit **pull requests**! 🚀  


