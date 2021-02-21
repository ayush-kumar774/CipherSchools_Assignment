#include <bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode
{
        int data ;
        TreeNode* right ;
        TreeNode* left ;

        TreeNode(int data)
        {
                this->data = data ;
                right = NULL ;
                left = NULL ;
        }
};

void inOrderTraversal(TreeNode root)
{
        TreeNode temp = root ;
       
}

void preOrderTraversal(TreeNode root)
{
        TreeNode temp = root ;
       
}

void postOrderTraversal(TreeNode root)
{
        TreeNode temp = root ;
       
}

void levelOrderTraversal(TreeNode root)
{
        TreeNode temp = root ;
       
}


int32_t main()
{
        TreeNode* root = new TreeNode(10);
        root->left = new TreeNode(5);
        root->right = new TreeNode(20);
        return 0 ;
}