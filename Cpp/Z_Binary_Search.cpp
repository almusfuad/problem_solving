#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right) {
        int mid = (left + right) / 2;
        
        if(arr[mid]==x) {
            return true;
        } else if(arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}


int main()
{
    int n, q;
    cin>>n>>q;

    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    while(q--) {
        long long int x;
        cin>>x;

        if(binarySearch(arr, x)) {
            cout<< "found" << endl;
        } else {
            cout<<"not found" << endl;
        }
    }
    return 0;
}