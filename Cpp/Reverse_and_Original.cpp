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

void insert_at_tail(Node*& head, Node*& tail, long long int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_reversed_order(Node *head) {
    if(head == NULL) return;
    print_reversed_order(head->next);
    cout<<head->val<<" ";
}

void print_original_order(Node *head) {
    if(head == NULL) return;
    cout<<head->val<<" ";
    print_original_order(head->next);
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    long long int val;
    while(true) {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    print_reversed_order(head);
    cout<<endl;
    print_original_order(head);

    return 0;
}