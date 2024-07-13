class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty())
        {
            Node* temp = q.front().first;
            int level = q.front().second;
            q.pop();
            if(mp.find(level) == mp.end())
            {
                mp[level] = temp->data;
            }
            if(temp->left) q.push({temp->left, level-1});
            if(temp->right) q.push({temp->right, level+1});
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }

};