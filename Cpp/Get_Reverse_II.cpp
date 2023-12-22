#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        string s;
        int id;
};


int main()
{
    int n;
    cin>>n;
    Student arr[n];

    for(int i=0; i<n; ++i) {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id;
    }

    for(int i=0,  j=n-1; i<j; ++i, --j) {
        int temp = arr[i].id;
        arr[i].id = arr[j].id;
        arr[j].id = temp;
    }

    for(int i=0; i<n; ++i) {
        cout<<arr[i].nm<<" "<<arr[i].cls<<" ";
        cout<<arr[i].s<<" "<<arr[i].id<<endl;
    }
    return 0;
}