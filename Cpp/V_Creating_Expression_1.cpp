#include<bits/stdc++.h>
using namespace std;

bool canReachTarget(vector<int> arr, int n, int target, int currentSum, int index)
{
    if(index == n) 
        return currentSum == target;
    
    if(canReachTarget(arr, n, target, currentSum+arr[index], index+1))
        return true;

    if(canReachTarget(arr, n, target, currentSum-arr[index], index+1))
        return true;
    
    return false;
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    if(canReachTarget(arr, n, x, arr[0], 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}