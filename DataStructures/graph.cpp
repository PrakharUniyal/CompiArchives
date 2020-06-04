#include <bits/stdc++.h>
using namespace std;

// As it turns out adjacency matrix is hardly used in competitive programming so we will be using only the adjacency list representation for graphs.
class graph
{
    public:
    // No of nodes
    int no_of_node;
    // Information about edges
    vector<vector<int>> adj_list;

    // Constructor
    graph(int n)
    {
        // Specify no_of_node
        no_of_node = n;

        // Initialize adj_list for n nodes
        for(int i=0;i<n;i++)
        {
            adj_list.push_back({});
        }
    }

    // Adding edge information
    void add_edge(int a, int b)
    {
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // Implementation of DFS with backtracking
    void DFS_util(int a, vector<bool> visited_nodes)
    {

    }
    void DFS(int a)
    {

    }
};

int main()
{
    graph* gmap = new graph(100);

}