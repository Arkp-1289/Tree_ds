void spiral_view(struct Node* root){
	if (root==NULL){cout<<" NO nodes";}
	else{
	stack<struct Node*>s1;
	stack<struct Node*>s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty()){
    	while (!s1.empty()){
    		for (int i=0;i<s1.size();i++){
    			struct Node* temp=s1.top();
    			cout<<temp->val<<" ";
    			s1.pop();
    			if (temp->left){s2.push(temp->left);}
    			if (temp->right){s2.push(temp->right);}

    		}
    	}
    	while(!s2.empty()){
    		for (int i=0;i<s2.size();i++){
    			struct Node* temp=s2.top();
    			cout<<temp->val<<" ";
    			s2.pop();
    			if (temp->right){s1.push(temp->right);}
    			if (temp->left){s1.push(temp->left);}
    			
    		}
    	}
    }


	}

}


      10
    8   20
      15  25
        
     o/p:    10 20 8 15 20
