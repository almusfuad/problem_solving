#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int cls;
        string section;
        int mathMarks;
        int engMarks;
};


int main()
{
    int n;
    cin>>n;

    Student a[n];
    for(int i=0; i<n; ++i) {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].mathMarks>>a[i].engMarks;
    }


    for(int i=n-1; i>=0; --i) {
        cout<<a[i].name<<" "<<a[i].cls<<" ";
        cout<<a[i].section<<" "<<a[i].mathMarks<<" ";
        cout<<a[i].engMarks<<endl;
    }
    return 0;
}