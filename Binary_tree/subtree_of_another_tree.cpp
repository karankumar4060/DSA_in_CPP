// return true if there is a substree of root with the same structure 
// and node values of subroot and false otherwise


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
        left = right= NULL;
    }
};

static int idx =-1;

node* buildtree(vector<int> nodess){
    idx++;

    if(nodess[idx]==-1){
        return NULL;
    }

    node* currnode = new node(nodess[idx]);
    currnode->left= buildtree(nodess);
    currnode->right = buildtree(nodess);

    return currnode;
}

bool isidentical(node* root1, node* root2){
    if(root1==NULL && root2 ==NULL){
        return true;
    }else if( root1==NULL || root2 ==NULL){
        return false;
    }

    if(root1->data != root2->data){
        return false;
    }

    return isidentical(root1->left, root2->left) && isidentical(root1->right, root2->right);


}

bool issubtree(node* root, node* subtree){
    if(root==NULL && subtree==NULL){
        return true;
    }else if(root==NULL || subtree==NULL){
        return false;
    }

    if(root->data ==subtree->data){
        if(isidentical(root, subtree)){
            return true;
        }
    }

    int isleftsubtree = issubtree(root->left, subtree);

    if(!isleftsubtree){
        return issubtree(root->right, subtree);
    }

    return true;
}


int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);

    node* subRoot = new node(2);
    subRoot->left = new node(4);
    subRoot->right = new node(5);

    cout<<issubtree(a, subRoot)<<endl;

    return 0;
}
 