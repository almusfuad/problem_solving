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

void printLevelOrder(Node* root, int level)
{
    queue<pair<Node*, int>> q;
    if(root) q.push({root, 0});

    queue<int> values;

    while(!q.empty())
    {
        pair<Node*, int> pr = q.front();
        Node* node = pr.first;
        int lvl = pr.second;

        if(lvl == level)
        {
            values.push(node->val);
        }

        if(node->left) q.push({node->left, lvl + 1});
        if(node->right) q.push({node->right, lvl + 1});

        q.pop();
    }

    if(!values.empty())
    {
        while(!values.empty())
        {
            cout<<values.front()<<" ";
            values.pop();
        }
    }
    else
    {
        cout<<"Invalid";
    }
}

int main()
{
    Node* root = inputTree();
    int level;
    cin>>level;
    printLevelOrder(root, level);
    return 0;
}