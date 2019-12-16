#include <iostream>
#include "stacktype.h"
#include "quetype.h"
#include "graphtype.h"
#include "graphtype.cpp"

using namespace std;

int main()
{
    // Generate the following graph. Assume that all edge costs are 1
    GraphType<char> gt(8);

    int numberOfVertices, numberOfEdges;
    char vertex, from, to;

    cin >> numberOfVertices >> numberOfEdges;

    for(int i=0; i<numberOfVertices; i++){
        cin >> vertex;
        gt.AddVertex(vertex);
    }

    for(int i=0; i<numberOfEdges; i++){
        cin >> from >> to;
        gt.AddEdge(from, to, 1);
    }

    /* • Add a member function OutDegree to the GraphType class which returns the outdegree of a given vertex.
           int OutDegree(VertexType v);
         • Add a member function to the class which determines if there is an edge between two vertices.
            bool FoundEdge(VertexType u, VertexType v);

        Check graphtype.h and graphtype.cpp
    */

    // Print the outdegree of the vertex D
    cout << gt.OutDegree('D') << endl;

    // Print if there is an edge between vertices A and D
    if(gt.FoundEdge('A', 'D'))
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;

    // Print if there is an edge between vertices B and D
    if(gt.FoundEdge('B', 'D'))
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;

    // Use depth first search in order to find if there is a path from B to E
    gt.DepthFirstSearch('B', 'E');

    // Use depth first search in order to find if there is a path from E to B
    gt.DepthFirstSearch('E', 'B');

    // Use breadth first search in order to find if there is a path from B to E
    gt.BreadthFirstSearch('B', 'E');

    // Use breadth first search in order to find if there is a path from E to B
    gt.BreadthFirstSearch('E', 'B');

    // Modify the BreadthFirstSearch function so that it also prints the length of the shortest path between two vertices
    // Check graphtype.h and graphtype.cpp

    // Determine the length of the shortest path from B to E
    gt.BreadthFirstSearch('B', 'E');

    return 0;
}


/**
Input

8 10
A B C D E F G H
A B
A C
A D
B A
D A
D E
D G
F H
G F
H E

*/
