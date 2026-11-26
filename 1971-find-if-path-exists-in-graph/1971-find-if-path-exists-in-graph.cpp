
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>> graph(n);

        for(vector<int> edge : edges)
        {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool> vis(n,false);

        return dfs(source,destination,graph,vis);
    }

    private:

    bool dfs(int source,int destination,vector<vector<int>>& graph,vector<bool>& vis)
    {
        if(source == destination)
        {
            return true;
        }
        vis[source] = true;

        for(int nbr:graph[source])
        {
            if(!vis[nbr])
            {
                bool status = dfs(nbr,destination,graph,vis);
                if(status == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};