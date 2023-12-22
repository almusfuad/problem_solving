#include<bits/stdc++.h>
using namespace std;
int main()
{
   char x;
   cin>>x;

   if(x>47 && x<58) {
    cout<<"IS DIGIT"<<endl;
   } else {
    cout<<"ALPHA"<<endl;
        if(x>64 && x<91) {
            cout<<"IS CAPITAL"<<endl;
        } else {
            cout<<"IS SMALL"<<endl;
        }
   }
   return 0;
}