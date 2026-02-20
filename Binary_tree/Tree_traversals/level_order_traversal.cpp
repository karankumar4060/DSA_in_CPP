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

void levelorder(node* root){       // COMPLEXITY time and space = O(n);
    if(root ==NULL){
        return ;
    }
    queue<node*> Q;
    Q.push(root);

    while(!Q.empty()){
        node* curr= Q.front();

        Q.pop();

        cout<<curr->data<<" ";

        if(curr->left !=NULL){
            Q.push(curr->left);
        }
        
        if(curr->right !=NULL){
            Q.push(curr->right);
        }
    }

    cout<<endl;

}
int main(){
    vector<int> nodesss ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root =buildtree(nodesss);

    levelorder(root);


    return 0;
}
