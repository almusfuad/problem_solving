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

void insert_at_tail(Node*  &head, int v) {
    Node* newNode = new Node(v);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = newNode;

}


void print_linked_list(Node *head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
        
    }

}

int maxElement(Node* head) {
    int max = INT_MIN;

    while(head != NULL) {
        if(max < head->val) max = head->val;
        
        head = head->next;
    }

    return max;
}

int minElement(Node* head) {
    int min = INT_MAX;

    while(head != NULL) {
        if(min > head->val) min = head->val;

        head = head->next;
    }

    return min;
}

int main()
{
    Node* head = NULL;
    int val;
    while(true) {
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }

    cout<<maxElement(head)<<" "<<minElement(head);

    // print_linked_list(head);
    return 0;
}