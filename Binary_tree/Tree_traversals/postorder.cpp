


#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        left=right=NULL;
    }

};
static int idx=-1;

node* buildtree(vector<int> nodess){
    idx++;
    if(nodess[idx]==-1){
        return NULL;
    }

    node* currnode = new node(nodess[idx]);
    currnode->left = buildtree(nodess);
    currnode->right = buildtree(nodess);

    return currnode;
}

void postorder(node* root){      // COMPLEXITY = O(n);
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int> nodesss ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root =buildtree(nodesss);


    postorder(root);
    cout<<endl;

    return 0;
}