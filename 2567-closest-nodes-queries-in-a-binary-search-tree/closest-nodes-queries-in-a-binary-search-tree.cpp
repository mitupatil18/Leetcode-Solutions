/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void find(TreeNode *a , vector<int>& v)
    {
        if(a==NULL)
        return ;
        find(a->left , v);
        v.push_back(a->val);
        find(a->right , v);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> arr;
        int n = queries.size();
        vector<vector<int>> ans ;
        find(root,arr);
        
        for(int i = 0 ; i<queries.size();i++)
        {
            int ind=lower_bound(begin(arr),end(arr),queries[i])-begin(arr);
            vector<int>ansq(2,0);
            ansq[1]=(ind==arr.size())?-1:arr[ind]; 
            if(ind<arr.size() and arr[ind]==queries[i]) ansq[0]=arr[ind];  
            else if(ind == 0) ansq[0]=-1;
            else  ansq[0]=arr[--ind];
            ans.push_back(ansq);
        }

        return ans ;
    }
};