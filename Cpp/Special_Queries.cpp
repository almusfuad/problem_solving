#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;

    queue<string> nm;
    for(int i=1; i<=q; i++)
    {
        int command;
        cin>>command;
        if(command == 0)
        {
            string person;
            cin>>person;
            nm.push(person);
        }

        if(command == 1)
        {
            if(nm.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<nm.front()<<endl;
                nm.pop();
            }
        }
    }
    return 0;
}