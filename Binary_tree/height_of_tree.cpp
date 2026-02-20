#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=  data;
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


    int height(node* root){
        if(root==NULL){
            return 0;
        }

        int left_height= height(root->left);
        int right_height = height(root->right);

        int curr_height= max(left_height, right_height) + 1;

        return curr_height;
    }


int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);
    idx = -1;  // ✅ Reset index
    cout<<height(a);

    cout<<endl;
    vector<int> nodes_2 ={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    node* b =buildtree(nodes_2);

       idx = -1;  // ✅ Reset index again for second tree

    cout<<height(b);


    return 0;
}
