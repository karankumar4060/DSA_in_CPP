// number of nodes in the longest path betweeen 2 leaves.


//approach 1;


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

int diameter(node* root){      //O(n^2)
    if(root==NULL){
        return 0;
    }

    int currdiam= height(root->left) + height(root->right) +1 ;   //this line take  O(n) , beacuse of height function
    int leftdiam = diameter(root->left);
    int rightdiam = diameter(root->right);

    return max(currdiam, max(leftdiam, rightdiam));
}

int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);

    cout<<diameter(a);

    return 0;
}













//approach 2: O(n) time complexity
//we will use a helper function to store the diameter of the tree and the height of the tre


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

int diameter(node* root){      //O(n^2)
    if(root==NULL){
        return 0;
    }

    int currdiam= height(root->left) + height(root->right) +1 ;   //this line take  O(n) , beacuse of height function
    int leftdiam = diameter(root->left);
    int rightdiam = diameter(root->right);

    return max(currdiam, max(leftdiam, rightdiam));
}

int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);

    cout<<diameter(a);

    return 0;
}
