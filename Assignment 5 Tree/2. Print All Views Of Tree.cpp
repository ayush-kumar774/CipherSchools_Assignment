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

void leftView(TreeNode root)
{
        TreeNode temp = root ;
       
}

void rightView(TreeNode root)
{
        TreeNode temp = root ;
       
}

void topView(TreeNode root)
{
        TreeNode temp = root ;
       
}

void bottom(TreeNode root)
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