#include <iostream>
#include <vector>
using namespace std;

class node {
    public:

    int data;
    node* left;
    node* right;

    //constractor         
    node(int data){
        this->data=data;

        left = right = NULL;
    }
};
static int idx = -1;

node* buildTree(vector<int> nodesss){
    idx++;
    if(nodesss[idx]==-1){
        return NULL;
    }

    node* currnode = new node(nodesss[idx]);
    currnode->left = buildTree(nodesss);
    currnode->right = buildTree(nodesss);
   
    return currnode;
}




int main(){
    vector<int> nodesss ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root = buildTree(nodesss);

    cout<<"root  "<<root->data <<endl;
    return 0;
}












// #include <iostream>
// using namespace std;

// class node{
//     public:

//     node
// }

// int main(){
//     vector<int> nodesss ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     node* root = buildTree(nodesss);

//     cout<<"root  "<<root->data <<endl;

//     return 0;
// }