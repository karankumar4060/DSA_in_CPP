#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

void topview(node* root){
    queue<pair<node* , int>> Q; //(Node, HD)  this is a queue of pairs where each pair contains a node and its horizontal distance
    map<int , int> m; //(HD , node->data) this map will store the top view of the tree

    Q.push(make_pair(root, 0)); //push the root node with distance 0 into the queue

    while(!Q.empty()){
        pair<node* ,int> curr =Q.front(); //get the front node from the queue
        Q.pop();

        node* currnode =curr.first; //get the node from the pair
        int currHD = curr.second; //get the horizontal distance from the pair

        if(m.count(currHD)==0){  //HD ->add in map if key is not present
            m[currHD] =currnode->data; //add the data of the node to the map
        }

        if(currnode->left != NULL){
            pair<node* , int> left = make_pair(currnode->left, currHD-1); //create a pair with left child and horizontal distance -1
            Q.push(left); //push the left child of the current node into the queue with distance decreased by 1
        }
        if(currnode->right != NULL){
            pair<node* , int> right = make_pair(currnode->right, currHD+1); //create a pair with right child and horizontal distance increased by 1
            Q.push(right); //push the right child of the current node into the queue with distance increased by 1
        }



    }

    for(auto it: m){
        cout<<it.second<<" "; //print the top view of the tree
    }

}



int main(){
    vector<int> nodes_1 ={1,2, 4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* a =buildtree(nodes_1);

  topview(a);

    return 0;
}
