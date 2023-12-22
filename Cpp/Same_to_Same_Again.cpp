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

class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val) 
        {
            sz++;
            Node* newNode = new Node(val);

            if(head == NULL) {
                head = newNode;
                tail = newNode;
                return;
            }

            tail->next = newNode;
            newNode->pre = tail;
            tail = tail->next;
        }

        void pop() 
        {
            sz--;
            Node* deleteNode = tail;
            tail = tail->pre;
            if(tail == NULL) head = NULL;
            else tail->next = NULL;
            delete deleteNode;
        }

        int top() 
        {
            return tail->val;
        }

        int size() 
        {
            return sz;
        }

        bool empty() 
        {
            if(sz == 0) return true;
            else return false;
        }
};


class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)
        {
            sz++;
            Node* newNode = new Node(val);
            
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }

            tail->next = newNode;
            newNode->pre = tail;
            tail = tail->next;
        }

        void pop() 
        {
            sz--;
            Node* deleteNode = head;
            head = head->next;

            if(head == NULL)
            {
                tail = NULL;
                delete deleteNode;
                return;
            }

            head -> pre = NULL;
            delete deleteNode;
        }

        int front() 
        {
            return head->val;
        }

        int size() 
        {
            return sz;
        }

        bool empty() 
        {
            if(sz == 0) return true;
            else return false;
        }
};

int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin>>n>>m;

    int a, b;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        st.push(a);
    }

    for(int i=0; i<m;  i++)
    {
        cin>>b;
        q.push(b);
    }

    if(st.size() == q.size()) 
    {
        bool flag = true;
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        
        if(flag==true) 
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}