#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root)
        q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) {
            q.push(p->left);
        }
        if (p->right)
            q.push(p->right);
    }

    priority_queue<int> pq;
    vector<int> tree;

    // Convert binary tree to level-order array
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        if (current == NULL) {
            tree.push_back(-1);
        } else {
            tree.push_back(current->val);
            q.push(current->left);
            q.push(current->right);
        }
    }

    for (int val : tree) {
        pq.push(val);
    }

    int qCount;
    cin >> qCount;

    while (qCount--) {
        int type;
        cin >> type;

        if (type == 1) {
            int val;
            cin >> val;
            pq.push(val);
        } else if (type == 2) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
    return 0;
}