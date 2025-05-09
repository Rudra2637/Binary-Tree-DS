#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
      Node* left;
      Node* right;
  
      // Constructor to initialize a new node
      Node(int val) {
          data = val;
          left = NULL;
          right = NULL;
      }
  };

  class Solution {
    public:
      // Function to return the lowest common ancestor in a Binary Tree.
      Node* lca(Node* root, int n1, int n2) {
          // Your code here
          if(root == NULL)return NULL;
          
          if(root->data == n1 || root->data == n2)return root;
          Node* left = lca(root->left,n1,n2);
          
          if(root->data == n1 || root->data == n2)return root;
          Node* right = lca(root->right,n1,n2);
          
          
          if(left && right) return root;
          
          else if(!left && right) return right ; 
          
          else if(left && !right) return left;
          
          else return NULL;
          
      }
  };