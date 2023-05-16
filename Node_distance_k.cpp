 void print_nodes_k(struct Node * root,int k){
 	if (k<0 || root ==NULL){return;}
 	if (k==0){cout<<root->val<<" ";}
 	else{
   		 print_nodes_k(root->left,k-1);
   		 print_nodes_k(root->right,k-1);
    }
}



k=2
   10
 8    30
    40   50
     
 h(10,2)--| 
        |-----h(8,1)---|
        |            |------h(NULL,0)    even k=0 its null so not printed
        |            |------h(NULL,0)
        |
        |----h(30,1)---|  
        |            |------h(40,0)-----|   prints 40
        |            |                |------h(NULL)   0
        |            |                |------h(NULL)   0
                     |
                     |------h(50,0)-----|   prints 50
                                      |------h(NULL)     0
                                      |------h(NULL)     0
