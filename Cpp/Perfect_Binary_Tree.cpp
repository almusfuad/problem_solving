#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* inputTree()
{
    int val;
    cin>>val;

    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin>>l>>r;
        
        if(l != -1)
        {
            p->left = new Node(l);
            if(p->left) q.push(p->left);
        }
        else
        {
            p->left = NULL;
        }

        if(r != -1)
        {
            p->right = new Node(r);
            if(p->right) q.push(p->right);
        }
        else
        {
            p->right = NULL;
        }
    }
    return root;
}

int maxHeight(Node* root)
{
    if(root == NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l, r)+1;
}

int countNodes(Node* root)
{
    if(root == NULL) return 0;

    int l = countNodes(root->left);
    int r = countNodes(root->right);

    return l+r+1;
}

bool twoLeafsAvailable(Node* root)
{
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL || root->right == NULL) return false;

    bool l = twoLeafsAvailable(root->left);
    bool r = twoLeafsAvailable(root->right);

    if(l == false || r == false) return false;

    return true;
}

int main()
{
    Node* root = inputTree();

    int height = maxHeight(root);
    int nodes = countNodes(root);
    bool check = twoLeafsAvailable(root);

    if(check == true || nodes == ((height * height)-1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}