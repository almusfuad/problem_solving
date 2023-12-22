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

int levelOrderValue(Node* root)
{
    int value = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* fr = q.front();
        q.pop();

        value += fr->val;

        if(fr->left) q.push(fr->left);
        if(fr->right) q.push(fr->right);
    }
    return value;
}
int main()
{
    Node* root = inputTree();
    
    int ans = levelOrderValue(root);
    cout<<ans<<endl;
    return 0;
}