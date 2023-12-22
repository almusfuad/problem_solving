#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;

    // take input line as EOF
    while(getline(cin, line))
    {
        // break the libe into word
        stringstream ss(line);
        string word, output;
        vector<string> words;

        // operation on every specific word
        while(ss>>word)
        {
            sort(word.begin(), word.end());

            // store in another vector to perform operation
            words.push_back(word);
        }

        // cout<<words.size()<<endl;

        for(int i = 0; i < words.size(); i++ )
        {
            string sortedWord = words[i];
            map<char, int> freqMap;
            for(char c: sortedWord)
            {
                freqMap[c]++;
            }

            string reorderedWord;
            for(char c : sortedWord)
            {
                reorderedWord += string(freqMap[c], c);
            }

            output += reorderedWord;
        }

        sort(output.begin(), output.end());

        cout<<output<<endl;
    }
    
    return 0;
}