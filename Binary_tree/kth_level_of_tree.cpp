// print all elements or node of kth level 


#include <iostream>
#include<vector>
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

    node* currnode= new node(nodess[idx]);
    currnode->left = buildtree(nodess);
    currnode->right = buildtree(nodess);

    return currnode;
}

void kth_helper(node* root,int k, int currlevel){  // recursive helper function
    
    if(root==NULL){
        return ;
    }

    if(currlevel ==k){
        cout<<root->data<<" ";
        return;

    }

    kth_helper(root->left, k, currlevel+1);
    kth_helper(root->right, k, currlevel+1);


}


void k_th_level(node* root , int k){
    // sometime we required some extra parameter so we use helper function
    kth_helper(root, k, 1);   // we need to pass the value of level ie 1

    cout<<endl;
}


int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);

    k_th_level(a,3);
  

    return 0;
}
