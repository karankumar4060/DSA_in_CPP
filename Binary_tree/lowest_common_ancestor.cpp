
// 1st step = calculate root to node path of each node

// approach 1


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

int LCA(node* root, int n1, int n2){  //O(n) , space O(n);
    vector<int> path1;
    vector<int> path2;

    root_to_node_path(root, n1, path1);
    root_to_node_path(root, n2, path2);

    int lca=-1;
    for(int i=0,j=0;  i<path1.size() && j<path2.size(); i++, j++){
        if(path1[i] != path2[j]){
            return lca;
        }
        lca=path1[i];
    }
    return lca;
}


int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);
    

    int n1= 4, n2=5;
    cout<<"lca = "<<LCA(a, n1, n2);

    return 0;
}
