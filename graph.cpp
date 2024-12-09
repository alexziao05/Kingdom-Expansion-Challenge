#include "graph.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std; // Now we can use standard library names without the `std::` prefix

// Load the graph from a file
bool Graph::loadGraphFromFile(const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        return false;
    }

    // Get numEdges and numNodes
    int numEdges;
    int numNodes;

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

    // Get []

    // Implement the adjacency matrix setup

    // Comment this line before submission
    cout << "TODO: Implement adjacency matrix initialization here.\n";

    infile.close();
    return true;
}

// Prim's algorithm to find the MST
int Graph::primMST(vector<int>& mstStart, vector<int>& mstEnd) {
    // Placeholder for visited nodes and minimum weight initialization
    cout << "TODO: Implement Prim's algorithm here.\n";

    // Steps:
    // 1. Initialize visited array and minWeight array
    // 2. Start from node 1
    // 3. Use a loop to find the minimum weight edge at each step
    // 4. Update MST edges (mstStart and mstEnd vectors)
    // 5. Return the total cost of the MST

    // Placeholder output
    mstStart.push_back(1);
    mstEnd.push_back(2);
    cout << "TODO: Replace placeholder MST output with the actual MST.\n";

    return 0; // TODO: Return the actual total cost of the MST
}
