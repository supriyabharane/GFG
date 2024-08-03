class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
         queue<Node*> q;
        q.push(node);
    
        while(!q.empty()){
            auto root=q.front();
            q.pop();
            
            Node* l=root->left;
            Node* r=root->right;
        
            root->right=l;
            root->left=r;
            if(l!=NULL){
                q.push(root->right);
                
            }
            if(r!=NULL){
                q.push(root->left);
            }
                
        }
        return;
    }
};