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

bool same_to_same(Node* a, Node* b) {
    while(a != NULL && b != NULL) {
        if(a->val != b->val) return false;

        a = a->next;
        b = b->next;
    }

    return (a==NULL && b == NULL);
}

int main()
{
    Node* a = NULL;
    Node* b = NULL;
    int val;
    while(true) {
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(a, val);
    }

    while(true) {
        cin>>val;
        if(val == -1) {
            break;
        }
        insert_at_tail(b, val);
    }

    if(same_to_same(a, b)) cout<<"YES";
    else cout<<"NO";


    return 0;
}