#include<bits/stdc++.h>
using namespace std;
void maxArea(vector<int> h1, vector<int> h2)
{
    sort(h2.begin(), h2.end());
    int secondHigest = h2[h1.size()-2];
    int area1, area2;
    for(int i=0; i<h1.size(); i++)
    {
        if(h1[i] > secondHigest)
            area1 = i;
        else if(h1[i] == secondHigest)
            area2 = i;
    }

    if(area1 < area2)
        cout << area1 << " " << area2 << endl;
    else
        cout << area2 << " " << area1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> h(n);
        for(int i=0; i<n; i++)
            cin >> h[i];
        maxArea(h, h);
    }
    return 0;
}