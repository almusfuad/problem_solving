#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    string address;
    Node* next;
    Node* pre;
    
    Node(string address){
      this->address = address;
      this->next = NULL;
      this->pre = NULL;
    }
};


void insert_at_tail(Node* &head, Node* &tail, string address) {
    Node* newNode = new Node(address);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}


Node* visit_address(Node* head,Node* tail, string address) {
    Node* current =  head;
    Node* current1 = tail;
    while(current != NULL) {
        if(current->address == address) {
            cout<<current->address<<endl;
            return current;
        }
        current = current->next;
    }
    cout<<"Not Available"<<endl;
    return current1;
}

void visit_previous(Node* &current) {
        if(current != NULL && current->pre != NULL ) {
            cout<<current->pre->address<<endl;
            current = current->pre;
        } else {
            cout<<"Not Available"<<endl;
        }
}

void visit_next(Node* &current) {
        if(current != NULL && current->next != NULL ) {
            cout<<current->next->address<<endl;
            current = current->next;
        } else {
            cout<<"Not Available"<<endl;
        }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string address;
    while(true) {
        cin>>address;
        if(address=="end") break;
        insert_at_tail(head, tail, address);
    }

    int n;
    cin>>n;

    string command;
    Node* current = NULL;
    while(n--) {
        cin>>command;
        if(command == "visit") {
            cin>>address;
            current = visit_address(head, current, address);
        }else if(command == "prev") {
            visit_previous(current);
        }if(command == "next") {
            visit_next(current);
        }
    }
    return 0;
}
