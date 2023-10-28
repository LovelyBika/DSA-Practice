#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

void preOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";

    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(TreeNode *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(TreeNode *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void levelTraversal(TreeNode *root)
{
    

    if (root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        
       TreeNode *val = q.front();
        q.pop();
        cout<<val->data<<" ";
            if (val->left != NULL)
                q.push(val->left);
            if (val->right != NULL)
                q.push(val->right);
           
        }
        
    }
//create BinaryTree
Node * solve(vector<int>&vc,int index){
    Node *root=new Node(vc[index]);
    int n= vc.size();
    if(index>=n)
     return nullptr;
     else {
         root->left=solve(vc,2*index+1);
         root->right=solve(vc,2*index+2);
     }
     return root;
}
Node* createTree(vector<int>&arr){
   return solve(arr,0);
   
}
    

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(8);

    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);
    int num;
    cout << "Enter  1 for DFS Traversal \nEnter 2 for BFS Traversal\n";
    cin >> num;

    switch (num)
    {

    case 1:
        cout << "Pre order Traversal\n";
        preOrder(root);
        cout << "\nIn order Traversal\n";
        inOrder(root);
        cout << "\nPost order Traversal\n";
        postOrder(root);
        break;
    case 2:
        cout << "Your BFS traversal:\n";
        levelTraversal(root);
        break;
    default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}
