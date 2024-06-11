class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
        vector<int> adj[N];
	    for(auto it : prerequisites)
	    adj[it[1]].push_back(it[0]);
	    vector<int> ind(N,0);
	    for(int i = 0 ; i<N ; i++)
	    {
	        for(auto x : adj[i])
	        ind[x]++ ;
	    }
	    queue<int> q;
	    for(int i = 0 ; i<N ; i++)
	    {
	        if(ind[i]==0)
	        q.push(i);
	    }
	    vector<int> topo;
	    while(!q.empty())
	    {
	        int x = q.front();
	        q.pop();
	        topo.push_back(x);
	        for(auto i : adj[x])
	        {
	            ind[i]--;
	            if(ind[i]==0)
	            q.push(i);
	        }
	    }
	    return topo.size()==N ? 1 :0;
    }
};