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


    int count(node* root){
        if(root==NULL){
            return 0;
        }

        int left_count= count(root->left);
        int right_count = count(root->right);

        int curr_count= (left_count + right_count) +1 ;

        return curr_count;
        
    }


int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);

    cout<<count(a);

    cout<<endl;



    return 0;
}
