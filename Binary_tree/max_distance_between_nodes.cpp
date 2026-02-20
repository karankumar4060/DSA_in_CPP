
//complexity O(n);


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

bool root_to_node_path(node* root, int n, vector<int>& path){
    if(root==NULL) return false;

    path.push_back(root->data);

    if(root->data==n){
        return true;
    }

    int isleft = root_to_node_path(root->left , n, path);
    int isright = root_to_node_path(root->right, n , path);

    if(isleft || isright){
        return true;
    }

    path.pop_back();
    return false;
    
}




int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);
    
    vector<int> path;
    root_to_node_path(a, 5,path);

    for(int val : path){
        cout<<val<<" ";
    }

    return 0;
}
  