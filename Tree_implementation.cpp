#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define nline "\n"
#define ll long long int
/*******************/
struct Node{
	struct Node* left;
	int val;
	struct Node* right;
};
void printTree(struct Node* root){
	if (root!=NULL){
		cout<<root->val<<" ";
	    if (root->left){printTree(root->left);}
	    if (root->right){printTree(root->right);}
    }
}
struct Node* create(int v){
	struct Node * temp=(struct Node*)malloc(sizeof(struct Node));
	temp->val=v;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

struct Node * insert(struct Node* root,int v){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	if (root==NULL){root=create(v);}
	else if (v<=root->val){root->left=insert(root->left,v);}
    else{root->right=insert(root->right,v);}
    return root;
	}

int main(){
	int n;
	cin>>n;
	struct Node* root=NULL;
	while(n--){
		int t;
		cin>>t;
		root=insert(root,t);
	}
	printTree(root);

}
