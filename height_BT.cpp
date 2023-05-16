int height(struct Node* root){
	if (root==NULL){return 0;}
	return 1+max(height(root->left),height(root->right));
}



   10
 8    30
    40   50
     
 h(10)--| 1+max(1,2) =3
        |-----h(8)---| 1+max(0,0)
        |            |------h(NULL)
        |            |------h(NULL)
        |
        |----h(30)---|  1+max(1,1)
        |            |------h(40)-----| 1+max(0,0)
        |            |                |------h(NULL)   0
        |            |                |------h(NULL)   0
                     |
                     |------h(50)-----| 1+max(0,0)
                                      |------h(NULL)     0
                                      |------h(NULL)     0
