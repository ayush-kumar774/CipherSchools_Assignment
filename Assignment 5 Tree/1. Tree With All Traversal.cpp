#include <bits/stdc++.h>
using namespace std;
#define int long long

struct TreeNode
{
        int data;
        TreeNode *right;
        TreeNode *left;

        TreeNode(int data)
        {
                this->data = data;
                right = NULL;
                left = NULL;
        }
};

void inOrderTraversal(TreeNode *root)
{
        TreeNode *temp = root;
        if (temp == NULL)
                return;

        inOrderTraversal(temp->left);

        cout << temp->data << " ";

        inOrderTraversal(temp->right);
}

void preOrderTraversal(TreeNode *root)
{
        TreeNode *temp = root;

        if (temp == NULL)
                return;

        cout << temp->data << " ";

        preOrderTraversal(temp->left);

        preOrderTraversal(temp->right);
}

void postOrderTraversal(TreeNode *root)
{
        TreeNode *temp = root;
        if (temp == NULL)
                return;

        postOrderTraversal(temp->left);

        postOrderTraversal(temp->right);

        cout << temp->data << " ";
}

void levelOrderTraversal(TreeNode *root)
{
        TreeNode *temp = root;
        if (root == NULL)
                return;

        
        queue<TreeNode *> q;

        q.push(root);

        while (q.empty() == false)
        {

                TreeNode *temp = q.front();
                cout << temp->data << " ";
                q.pop();

                if (temp->left != NULL)
                        q.push(temp->left);


                if (temp->right != NULL)
                        q.push(temp->right);
        }
}

int32_t main()
{
        TreeNode *root = new TreeNode(10);
        root->left = new TreeNode(5);
        root->right = new TreeNode(20);
        inOrderTraversal(root);
        cout << endl ;
        preOrderTraversal(root);
        cout << endl ;
        postOrderTraversal(root);
        cout << endl ;
        levelOrderTraversal(root);
        cout << endl ;
        return 0;
}