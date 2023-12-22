#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int val;
    Node* next;
    Node* pre;
    
    Node(int val){
      this->val = val;
      this->next = NULL;
      this->pre = NULL;
    }
};


void insert_at_head(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}

void insert_at_position(Node* head, int pos, int value) {
    Node* newNode = new Node(value);
    Node* temp = head;

    for(int i=1; i<= pos-1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->pre = newNode;
    newNode->pre = temp;
}

int list_size(Node* head) {
    int cnt=0;

    while(head != NULL) {
        cnt++;
        head = head->next;
    }

    return cnt;
}


void print_forward(Node* head) {
    cout<<"L -> ";
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void print_reverse(Node* tail) {
    cout<<"R -> ";
    while(tail != NULL) {
        cout<<tail->val<<" ";
        tail = tail->pre;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    int x, v;
    while(q != 0) {
        cin>>x>>v;
        if(x>list_size(head)) {
            cout<<"Invalid"<<endl;
        }else if(x==0) {
            insert_at_head(head, tail, v);
            print_forward(head);
            print_reverse(tail);
        } else if(x==list_size(head)) {
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_reverse(tail);
        } else {
            insert_at_position(head, x, v);
            print_forward(head);
            print_reverse(tail);
        }
        q--;
    }
    return 0;
}