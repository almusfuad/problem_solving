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

        int a;

        map<int, int> countNum;
        int maxCount = 0;
        int mostFrequentNumber;

        while(n--)
        {
            cin>>a;
            countNum[a]++;

            if(countNum[a] > maxCount)
            {
                maxCount = countNum[a];
                mostFrequentNumber = a;
            }
            else if(countNum[a] == maxCount && a >= mostFrequentNumber)
            {
                mostFrequentNumber = a;
            }
        }

        cout<<mostFrequentNumber<<" "<<maxCount<<endl;
    }
    return 0;
}