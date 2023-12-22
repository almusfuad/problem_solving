#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        // get input of sentence
        string sentence;
        getline(cin, sentence);

        // declare variables for storing words that differ by space
        string word;
        stringstream ss(sentence);

        // storing the words in pair values to count the words
        map<string, int> mp;
        int maxCount = 0;
        string firstDuplicate;
        
        while(ss>>word)
        {
            mp[word]++;
            // mp[word] will give the value of that word key
            if(mp[word] > maxCount)
            {
                maxCount = mp[word];
                firstDuplicate = word;
            }
        }

        cout<<firstDuplicate<<" "<<maxCount<<endl;
    }


    return 0;
}