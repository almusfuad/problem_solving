#include<bits/stdc++.h>
using namespace std;


long long int pwr(int x, int n) {
    if(n==0) return 0;
    
    if(n%2==0) {
        long long int power = 1;
        for(int i=1; i<=n; i++) {
            power *= x;
        }
        return power + pwr(x, n-2);
    } else {
        return pwr(x, n-1);
    }

    
}

int main() {
    int x, n;
    cin>>x>>n;

    long long int result = pwr(x, n);


    cout<<result<<endl;

    return 0;
}