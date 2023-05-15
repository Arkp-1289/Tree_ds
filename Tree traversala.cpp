void inorder(struct Node * root){
	if (root!=NULL){
		if (root->left){inorder(root->left);}
		cout<<root->val<<" ";
		if (root->right){inorder(root->right);}
	}
}
void preorder(struct Node * root){
	if (root!=NULL){
		cout<<root->val<<" ";
		if (root->left){inorder(root->left);}
		if (root->right){inorder(root->right);}
	}
}

void postorder(struct Node * root){
	if (root!=NULL){
		if (root->left){inorder(root->left);}
		if (root->right){inorder(root->right);}
		cout<<root->val<<" ";
	}
}
