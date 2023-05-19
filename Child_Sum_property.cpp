bool check(struct Node * root){
	if (root==NULL){return true;}
	if (root->left==NULL && root->right==NULL){return true;}
	int sum=0;
	if (root->left){sum+=root->left->val;}
	if (root->right){sum+=root->right->val;}
	return (root->val==sum && check(root->left) && check(root->right));
}
