#include<stdio.h>

void capital_to_small(char alph) {
    // int x=alph;
    if(alph>='A' && alph<='Z') {
        alph += 32;
    }
    printf("%c", alph);
}

int main() {
    
    char y;
    scanf("%c", &y);
    
    capital_to_small(y);
    return 0;
}
