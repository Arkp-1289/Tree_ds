void level_order(struct Node* root){
	if (root==NULL){cout<<"No elements"<<endl;}
	else{
		queue<struct Node*>q;
		q.push(root);
		while(!q.empty()){
			struct  Node* temp=q.front();
			q.pop();
			cout<<temp->val<<" ";
			if (temp->left){q.push(temp->left);}
			if (temp->right){q.push(temp->right);}
		}

	}
}
