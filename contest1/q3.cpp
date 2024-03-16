#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<int> g, int N, int vertex, int par, vector<long long> &result)
    {
        // Action on vertex after entering vertex

        cout << vertex << endl;
        for (int child : g[vertex])
        {
            // Take action on child before entering the child
            cout << "par " << vertex << " child " << child << endl;
            if (child == par)
                continue;

            dfs(g, N, child, vertex, result);
            // Take action on child after exiting the child

            // Update the result vector based on the problem requirement
            result[vertex] += result[child] + 1;
        }
        // Take action on vertex before exiting the vertex
    }

    vector<long long> calcPairs(int N, vector<int> &p)
    {
        vector<vector<int>> graph(N);
        vector<int> ancestor_count(N, 0);
        vector<long long> result(N, 0);

        for (int i = 1; i < N; ++i)
        {
            graph[p[i]].push_back(i);
        }

        dfs(graph, N, 0, -1, result);

        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V;
        cin >> V;

        vector<int> par(V);
        for (int i = 0; i < V; ++i)
        {
            cin >> par[i];
        }
        Solution obj;
        vector<long long> ans = obj.calcPairs(V, par);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
