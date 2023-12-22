#include<bits/stdc++.h>
using namespace std;

int sumOfPlants(int y)
{
    if(y == 0) return 1;

    int call = sumOfPlants(y-1);

    return call * 2;
}


int main()
{
    int y;
    cin >> y;
    int sum = sumOfPlants(y);
    cout << sum << endl;
    return 0;
}