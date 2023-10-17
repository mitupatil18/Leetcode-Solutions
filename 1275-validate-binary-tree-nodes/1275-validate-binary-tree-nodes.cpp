class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        queue<int> q;
        vector<int> p(n,0);
        for(int i = 0; i<n; i++)
        {
            if(leftChild[i] != -1)
                p[leftChild[i]]++;
            if(rightChild[i] != -1)
                p[rightChild[i]]++;
        }
        int root_index = 0;
        for(int i = 0; i < n; i++)
            if(p[i] == 0)
                root_index = i;
            
        vector<bool> visited(n,false);
        q.push(root_index);
        while(!q.empty())
        {
            int i = q.front();
            q.pop();
            if(visited[i] == true)
                return false;
            visited[i] = true;

            if(leftChild[i] != -1)
                q.push(leftChild[i]);
            if(rightChild[i]!= -1)
                q.push(rightChild[i]);
        }
        for(int i = 0; i<n; i++)
            if(visited[i] == false)
                return false;
        return true;
    }
};