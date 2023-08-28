void findFloor(Node* root, int x, int &res){
    
    if(!root) return;
    
    if(res < root->data && root->data<=x) res = root->data;
    
    findFloor(root->left, x, res);
    findFloor(root->right, x, res);
}

int floor(Node* root, int x) {
    
    
    int res = INT_MIN;
    findFloor(root, x, res);
    
    
    return (res == INT_MIN)? -1 : res;
}
