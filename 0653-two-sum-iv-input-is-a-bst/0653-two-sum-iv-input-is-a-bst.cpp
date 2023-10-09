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
        if(a==NULL) return ;
        find(a->left, v);
        v.push_back(a->val);
        find(a->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> a;
        find(root,a);
        if(a.size()==1) return false;
        int cnt = 0 ;
        for(int i = 0 ; i<a.size() ; i++)
        {
            int l = 0 , r = a.size()-1 , m , t = k-a[i];
            while(l<=r)
            {
                m = (l+r)/2 ;
                if(a[m]==t && m!=i) break;
                if(a[m]<t) 
                l = m+1 ;
                else
                r = m-1 ;
            }
            if(l<=r)
            cnt++ ;
        }
        return cnt;
    }
};