#include<bits/stdc++.h>
using namespace std;

char mixColors(char color1, char color2) {
    if ((color1 == 'R' && color2 == 'B')
    || (color1 == 'B' && color2 == 'R'))
    {
        return 'P';
    }
    else if ((color1 == 'R' && color2 == 'G')
    || (color1 == 'G' && color2 == 'R'))
    {
        return 'Y';
    }
    else if ((color1 == 'B' && color2 == 'G')
    || (color1 == 'G' && color2 == 'B'))
    {
        return 'C';
    }
    else
    {
        return '\0';
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        stack<char> colors;

        for (int i = 0; i < n; i++) {
            char color;
            cin >> color;

            if (!colors.empty()) {
                char topColor = colors.top();
                if(topColor == color)
                {
                    colors.pop();
                }
                else
                {
                    char mixedColor = mixColors(topColor, color);
                    if (mixedColor != '\0') {
                        colors.pop();
                        if(!colors.empty())
                        {
                            if(colors.top() == mixedColor)
                            {
                                colors.pop();
                            }
                            else
                            {
                                colors.push(mixedColor);
                            }
                        }
                        else
                        {
                            colors.push(mixedColor);
                        }
                    } else {
                        colors.push(color);
                    }
                }
            } else {
                colors.push(color);
            }
        }

        string result;
        while (!colors.empty()) {
            result = colors.top() + result;
            colors.pop();
        }

        cout << result << endl;
    }

    return 0;
}