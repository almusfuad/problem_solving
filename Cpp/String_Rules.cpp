#include<bits/stdc++.h>
using namespace std;


string apply_rules(const string& s) {
    string result;
    int i = 0;
    
    while (i < s.length()) {
        // Check if the character is a digit (N)
        if (isdigit(s[i])) {
            // Find the end of the group of small alphabets (C)
            int j = i + 1;
            while (j < s.length() && islower(s[j])) {
                j++;
            }
            
            // Get N and C
            int n = stoi(s.substr(i, j - i));
            string c = s.substr(i + 1, j - i - 1);
            
            // Apply the rule and append to the result string N times
            for (int k = 0; k < n; k++) {
                result += c;
            }
            
            // Move to the next non-alphabetic character (operator)
            i = j;
        } else {
            // Append the operator to the result string
            result += s[i];
            i++;
        }
    }
    
    return result;
}

int main() {
    string input_string;
    cin >> input_string;
    string output_string = apply_rules(input_string);
    cout << output_string << endl;
    return 0;
}
