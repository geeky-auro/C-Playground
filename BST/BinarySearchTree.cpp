#include "BinaryTreeNode.h"
class BST{
    BinaryTreeNode<int>* root;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    void deleteData(int data){
        if(root==NULL){
            return NULL;
        }
    }

    BinaryTreeNode<int>* returnRoot(int data,BinaryTreeNode<int>* root){

        if(data<root->data){
            if(root->left==NULL){
                BinaryTreeNode<int>*newNode=new BinaryTreeNode<int>(data);
                root->left=newNode;
                return root;
            }
            return returnRoot(data,root->left);
        }else{
            if(root->right==NULL){
                BinaryTreeNode<int>*newNode=new BinaryTreeNode<int>(data);
                root->right=newNode;
                return root;
            }
            return returnRoot(data,root->right);
        }
    }

    void insert(int data){
        if(root==NULL){
            BinaryTreeNode<int> *newroot=returnRoot(data,root)
            root=newroot;
            return;
        }
        if(data<root->data){
            root->left=returnRoot(data,root);
        }else{
            root->right=returnRoot(data,root);
        }
    }
    private:
    bool hasData(int data,BinaryTreeNode<int>*node){
        if(root==NULL){
            return false;
        }
        if(root->data==data){
            return true;
        }
        else if(data<root->data){
            return hasData(data,root->left);
        }else{
            return hasData(data,root->right);
        }
    }
    public:
    bool hasNode(int data){
        return hasData(data,root);
    }

};