#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word1;
    string word2;
    while(cin >> word1 >> word2)
    {
        int i=0;
        for(int j=0; j<word1.size(); j++)
        {
            if(word1[j] == word2[i])
                i++;
        }

        if(i==word2.size())
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}