#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* left ;
    node* right;

    node(int data){
        this->data= data;
        left = right = NULL;
    }
};


// for insert thr data in tree
node* insert(node* root, int val){
    if(root ==NULL){
        root =new node(val);
        return root;
    }
    if(val <root->data){
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// teavel in arr to build tree
node* buildBST(int arr[], int n){
    node* root = NULL;

    for(int i=0; i<n; i++){
        root = insert(root, arr[i]);
    }

    return root;
}



// void inorder(node* root){
//     if(root==NULL){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }


bool search(node* root, int key){   // O(height); in average cases = O(lon n)
    if(root ==NULL){
        return false;
    }
    if(root->data == key){  //found
        return true;
    }

    if(root->data > key){      //left subtree
        return search(root->left, key);
    }else {
        return search(root->right, key);    //right subtree
    }
}

int main(){
    int arr2[9]={8, 5, 3, 1, 4, 6, 10, 11, 14};
    
    node* root1 = buildBST(arr2, 9);
    // inorder(root1);
    cout<<search(root1, 6);
    cout<<endl;
    cout<<search(root1, 15);
    return 0;
}