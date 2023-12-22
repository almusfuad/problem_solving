#include<stdio.h>

void solve() {
    int key;
    scanf("%d", &key);

    int keys[5];
    for(int i=1; i<=3; ++i) {
        scanf("%d ", &keys[i]);
    }

    if(keys[key] == 0) {
        printf("NO\n");
        return;
    } 

    key = keys[key];

    if(keys[key]==0) {
        printf("NO\n");
        return;
    }

    printf("YES\n");

}


int main ()
{
    int test;
    scanf("%d", &test);

    while(test--) {
        solve();
    }
    return 0;
}