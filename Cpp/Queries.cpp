#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int val;
    Node* next;
    
    Node(int val){
      this->val = val;
      this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, long long int val){
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;

}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    long long int val;
    int q;
    int x;
    cin>>q;
    while(q != 0) {
        cin>>x>>val;
        if(x == 0) insert_at_head(head, tail, val);
        else if(x == 1) insert_at_tail(head, tail, val);
        cout<<head->val<<" "<<tail->val<<endl;
        q--;
    }

    return 0;
}