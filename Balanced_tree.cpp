int isBalanced(struct Node* root){
	if (root==NULL){return 0;}
	int lh=isBalanced(root->left);
	if (lh==-1){return -1;}
	int rh=isBalanced(root->right);
	if (rh==-1){return -1;}
	if (abs(lh-rh)>1){return -1;}
	else{return 1+max(lh,rh);}
}



     8
  7    15
       
       B(8)----|   1+max(0,0)=1    lh=1
               |----B(7)----| 
               |            |----NULL  0
               |            |----NULL  0
               |
               |   1+max(0,0)=1   rh=1
               |----B(7)----|
               |            |----NULL  0
               |            |----NULL  0
      abs(lh-rh)<=1 so 
      it returns 1+max(lh,rh)=1+max(1,1)=2
