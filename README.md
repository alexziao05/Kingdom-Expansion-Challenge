# Kingdom Expansion Challenge

## 📋 Project Overview

The **Kingdom Expansion Challenge** is a C++ implementation of the classic **Minimum Spanning Tree (MST)** problem using **Prim's Algorithm**. This project simulates a real-world scenario where a kingdom needs to expand by connecting villages with roads at the minimum possible cost.

## 🎯 Problem Statement

Imagine you are the royal engineer of a growing kingdom. The king wants to connect all villages in the realm with a road network, but resources are limited. Your task is to:

- Connect all villages with the minimum total construction cost
- Ensure every village is reachable from every other village
- Use the most efficient algorithm to find the optimal solution

This is essentially finding the **Minimum Spanning Tree** of a weighted graph where:
- **Vertices** represent villages
- **Edges** represent possible road connections
- **Weights** represent the cost of building each road

## 🏗️ Technical Implementation

### Core Components

#### 1. Graph Class (`graph.h` & `graph.cpp`)
- **Data Structure**: Adjacency matrix representation of the graph
- **Key Methods**:
  - `loadGraphFromFile()`: Reads graph data from input file
  - `primMST()`: Implements Prim's algorithm to find the MST

#### 2. Main Program (`main.cpp`)
- Orchestrates the entire process
- Loads graph data from `input.txt`
- Executes Prim's algorithm
- Displays the resulting minimum spanning tree and total cost

#### 3. Input Format (`input.txt`)
```
5 7           # [Number of vertices] [Number of edges]
1 2 4         # [Start vertex] [End vertex] [Weight/Cost]
1 3 3
2 3 1
...
```

### Algorithm: Prim's MST

**Prim's Algorithm** is a greedy algorithm that builds the MST by:
1. Starting with an arbitrary vertex (village 1)
2. Repeatedly adding the minimum-weight edge that connects a visited vertex to an unvisited vertex
3. Continuing until all vertices are included in the MST

**Time Complexity**: O(V²) where V is the number of vertices
**Space Complexity**: O(V²) for the adjacency matrix

## 🔧 Build & Run Instructions

### Prerequisites
- C++ compiler with C++17 support (g++, clang++)
- CMake (optional)
- Make utility

### Building the Project

#### Option 1: Using Makefile
```bash
make
./kingdom_expansion
```

#### Option 2: Using CMake
```bash
mkdir build && cd build
cmake ..
make
./LastName_FirstNamePrim
```

#### Option 3: Direct Compilation
```bash
g++ -Wall -std=c++17 -o kingdom_expansion main.cpp graph.cpp
./kingdom_expansion
```

### Cleaning Build Files
```bash
make clean
```

## 📊 Example Output

Given the input graph with 5 villages and 7 possible roads:

```
Number of nodes: 5
Number of edges: 7
Adjacency Matrix:
0 4 3 0 0
4 0 1 2 0
3 1 0 1 7
0 2 1 0 3
0 0 7 3 0

Minimum Spanning Tree:
Connecting village 1 to village 3
Connecting village 3 to village 2
Connecting village 3 to village 4
Connecting village 4 to village 5
Total Cost: 7
```

This means the kingdom can connect all 5 villages with a total road construction cost of 7 units.

## 🎓 Learning Outcomes & Skills Developed

### 1. **Graph Theory Fundamentals**
- Understanding graph representations (adjacency matrix vs. adjacency list)
- Comprehending the concept of Minimum Spanning Trees
- Learning the difference between connected and disconnected graphs

### 2. **Algorithm Design & Analysis**
- **Greedy Algorithms**: Prim's algorithm demonstrates the greedy approach
- **Time/Space Complexity Analysis**: Understanding O(V²) complexity
- **Algorithm Correctness**: Proving why greedy choice leads to optimal solution

### 3. **Data Structures Mastery**
- **2D Vectors/Arrays**: Implementing and manipulating adjacency matrices
- **Dynamic Arrays**: Using `std::vector` for flexible data storage
- **Memory Management**: Efficient use of space for graph representation

### 4. **C++ Programming Proficiency**
- **Object-Oriented Programming**: Class design with Graph abstraction
- **File I/O Operations**: Reading structured data from files
- **STL Containers**: Using `std::vector`, `std::string`, `std::stringstream`
- **Error Handling**: Implementing robust file loading with validation

### 5. **Software Engineering Practices**
- **Modular Design**: Separating concerns into header and implementation files
- **Build Systems**: Experience with Makefiles and CMake
- **Code Organization**: Clean separation between data structures and algorithms
- **Documentation**: Writing clear, maintainable code with comments

### 6. **Problem-Solving Skills**
- **Real-World Modeling**: Translating abstract problems into code
- **Optimization Thinking**: Finding the most efficient solution approach
- **Edge Case Handling**: Dealing with invalid inputs and error conditions
- **Testing & Debugging**: Verifying algorithm correctness with sample data

### 7. **Mathematical Concepts**
- **Graph Theory**: Understanding mathematical properties of trees and graphs
- **Discrete Mathematics**: Working with finite structures and combinatorics
- **Proof Techniques**: Understanding why Prim's algorithm produces optimal results

## 🚀 Advanced Extensions (Potential Improvements)

1. **Algorithm Comparison**: Implement Kruskal's algorithm and compare performance
2. **Visualization**: Add graphical output to visualize the MST construction process
3. **Interactive Mode**: Allow users to input custom graphs interactively
4. **Optimization**: Implement priority queue version for O((E + V) log V) complexity
5. **Network Analysis**: Add features to analyze graph properties (diameter, centrality)

## 📚 Theoretical Background

### Why Minimum Spanning Trees Matter

MSTs have numerous real-world applications:
- **Network Design**: Connecting computers/devices with minimum cable cost
- **Transportation**: Building road/railway networks efficiently
- **Utility Planning**: Laying pipelines, electrical grids, or communication networks
- **Cluster Analysis**: Grouping similar data points in machine learning
- **Circuit Design**: Minimizing wire length in electronic circuits

### Prim's vs. Kruskal's Algorithm

- **Prim's**: Grows the MST vertex by vertex (suitable for dense graphs)
- **Kruskal's**: Builds MST edge by edge using Union-Find (better for sparse graphs)

## 🏆 Key Achievements

Through this project, you've successfully:

1. ✅ Implemented a fundamental graph algorithm from scratch
2. ✅ Created a complete C++ application with proper code organization
3. ✅ Developed skills in file parsing and data validation
4. ✅ Gained experience with multiple build systems (Make, CMake)
5. ✅ Applied theoretical computer science concepts to solve practical problems
6. ✅ Demonstrated understanding of algorithm complexity and optimization

This project serves as an excellent foundation for more advanced graph algorithms and data structure implementations, showcasing your ability to bridge theory and practical implementation in computer science.

---

*This project demonstrates proficiency in algorithms, data structures, C++ programming, and software engineering principles - essential skills for any computer science professional.*
