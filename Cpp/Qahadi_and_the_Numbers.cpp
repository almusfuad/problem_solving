#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> nums(n);

        for(int i=0; i<n; i++)
        {
            cin>>nums[i];
        }
        unordered_set<int> uniqueNumber;
        int moves = 0;
        for(int i = 0; i < n; i++)
        {
            if(uniqueNumber.count(nums[i]))
            {
                moves++;
            }
            else
            {
                uniqueNumber.insert(nums[i]);
            }
        }
        

        cout<<moves<<endl;
    }
    return 0;
}