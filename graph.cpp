#include "graph.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring> 
using namespace std; // Now we can use standard library names without the `std::` prefix

// Global Variables
int numEdges;

// Load the graph from a file
bool Graph::loadGraphFromFile(const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        return false;
    }

    // Get numEdges and numNodes
    string firstline; 
    if (infile.is_open()) {
        getline(infile, firstline);
        vector<string> Edges_and_Nodes; 
        stringstream Edges_Nodes_Line(firstline); 
        string value; 
        char delimiter = ' '; 
        while (getline(Edges_Nodes_Line, value, delimiter)) {
            Edges_and_Nodes.push_back(value);
        }
        numNodes = stoi(Edges_and_Nodes[0]); 
        numEdges = stoi(Edges_and_Nodes[1]); 

        cout << "Number of nodes: " << numNodes << endl; 
        cout << "Number of edges: " << numEdges << endl;
    } 

    // Get <u> <v> <weight>, where <u> is the starting vertex, <v> is the ending vertex, and <weight> 
    string line; 
    vector<vector<int>> temp_adjMatrix; 
    if (infile.is_open()) {
        while(getline(infile, line)) {
            vector<int>temp_adj_matrix; 
            stringstream values(line); 
            string value; 
            char delimiter = ' '; 
            while(getline(values, value, delimiter)) {
                temp_adj_matrix.push_back(stoi(value)); 
            }   
            temp_adjMatrix.push_back(temp_adj_matrix);
        }
    }

    // Print temp_adjMatrix to make sure everything is inputted correctly 
    for (const auto& row : temp_adjMatrix) {
        for (int elem : row) {
            cout << elem << " "; 
        }
        cout << endl; 
    }

    // Comment this line before submission
    cout << "TODO: Implement adjacency matrix initialization here.\n";

    adjMatrix.resize(numNodes, vector<int>(numNodes, 0)); 
    // Implement the adjacency matrix setup
    for (const auto& column: temp_adjMatrix) {
        int node1 = column[0]; 
        int node2 = column[1]; 
        int weight = column[2]; 

        if (node1 >= 0 && node1 < numNodes + 1 && node2 >= 0 && node2 < numNodes + 1) {
            adjMatrix[node1-1][node2-1] = weight;
            adjMatrix[node2-1][node1-1] = weight;
        } else {
            cout << "Invalid node index: " << node1 << " or " << node2 << endl;
        }
    }

    // Print final adjacency matrix: 
    cout << "Adjacency Matrix:" << endl;
    for (const auto& row : adjMatrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    infile.close();
    return true;
}

// Prim's algorithm to find the MST
int Graph::primMST(vector<int>& mstStart, vector<int>& mstEnd) {
    // Placeholder for visited nodes and minimum weight initialization
    cout << "TODO: Implement Prim's algorithm here.\n";

    // Steps:
    // 1. Initialize visited array and minWeight array
    int visited_array[numNodes]; 
    memset(visited_array, false, sizeof(visited_array)); // Initialize with false
    // 2. Start from node 1
    visited_array[0] = true; // Start with the 0th vertex
    // 3. Use a loop to find the minimum weight edge at each step
    // MST Edges = Vertices - 1 
    cout << "Edge : Weight\n"; 
    int n_edges = 0; 
    int totalCost = 0; 
    while (n_edges < numNodes - 1) { // Make sure each vertex is hit at least once (Definition of MST)
        int min = INT_MAX; // Make sure we choose the minimum weight 
        int r=0, c=0; // R = row, C = column

        for (int i = 0; i < numNodes; ++i) { //Traverse through the row to pick every vertex 
            if (visited_array[i]) { // Check if it is inside visited array only when it is TRUE
                for (int j = 0; j < numNodes; ++j) { //Traverse through columns 
                    // Find the min value of a particular row 
                    if (min > adjMatrix[i][j]) {
                        if(!visited_array[j] && adjMatrix[i][j]) { // Make sure it is not visited and that it is not 0. We are not concerned with these values.
                            min = adjMatrix[i][j]; 
                            r = i; 
                            c = j; 
                        } 
                    }
                }

            }
        }
        mstStart.push_back(r+1);
        mstEnd.push_back(c+1);
        visited_array[c] = true; 
        n_edges++; 
        totalCost += adjMatrix[r][c]; 
    }
    // 4. Update MST edges (mstStart and mstEnd vectors)
    // 5. Return the total cost of the MST

    // Placeholder output

    cout << "TODO: Replace placeholder MST output with the actual MST.\n";

    return totalCost; // TODO: Return the actual total cost of the MST
}
