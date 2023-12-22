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

void insert_node(Node*& head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;

}

void sort_list(Node*& head) {
    if(head->next == NULL) return;

    for(Node* i=head; i->next != NULL; i=i->next) {
        for(Node* j=i->next; j!=NULL; j=j->next) {
            if(i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

void remove_duplicate(Node* head) {
    if(head == NULL) {
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) {
        if(tmp->val == tmp->next->val){
            tmp->next = tmp->next->next;
        }
        if(tmp->next == NULL) break;
        else if(tmp->val != tmp->next->val){
            tmp = tmp->next;
        }
    }
}

void print_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->val<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true) {
        cin>>value;
        if(value == -1) {
            break;
        }
        insert_node(head, tail, value);
    }
    sort_list(head);
    remove_duplicate(head);
    print_list(head);
    return 0;
}