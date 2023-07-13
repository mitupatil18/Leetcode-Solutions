class Solution {
public:
bool isfound(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsvisited,unordered_map<int,list<int>> &adj)
{
	visited[node]=true;
	dfsvisited[node]=true;
	for(auto j:adj[node])
	{
		if(!visited[j])
		{
			bool checkk=isfound(j,visited,dfsvisited,adj);
            // cout<<checkk;
            if (checkk==1) {
             return true;
            }
        }
		else if(dfsvisited[j])
		{
			return true;
		}

	}
	dfsvisited[node]=false;
	return false;
}
    bool canFinish(int v, vector<vector<int>>& edges) {
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    
    }
    unordered_map<int,bool> visited;
	unordered_map<int,bool> dfsvisited;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            bool ans=isfound(i,visited,dfsvisited,adj);
            if (ans) {
              return false;
            }
        }
    }
    return true;
        
    }
};