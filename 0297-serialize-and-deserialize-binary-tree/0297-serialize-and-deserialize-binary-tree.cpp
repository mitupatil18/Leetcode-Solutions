class Codec {
private:
    void sinorder(TreeNode* root , string& s)
    {
        if(root == NULL) 
        {
            s += "N,";
            return;
        }
        s += to_string(root->val) + ",";
        sinorder(root->left, s);
        sinorder(root->right, s);
    }
    
    TreeNode* construct(queue<string>& nodes) {
        string val = nodes.front();
        nodes.pop();
        if (val == "N") {
            return NULL;
        }
        TreeNode* root = new TreeNode(stoi(val));
        root->left = construct(nodes);
        root->right = construct(nodes);
        return root;
    }

public:
    string serialize(TreeNode* root) {
        string s;
        sinorder(root, s);
        return s;
    }

    TreeNode* deserialize(string data) 
    {
        queue<string> nodes;
        stringstream ss(data);
        string item;
        while (getline(ss, item, ',')) {
            nodes.push(item);
        }
        return construct(nodes);
    }
};
