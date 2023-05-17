int btsize(struct Node* root){
	if (root==NULL){return 0;}
    else{
    	return 1+btsize(root->right)+btsize(root->left);
    }
}
