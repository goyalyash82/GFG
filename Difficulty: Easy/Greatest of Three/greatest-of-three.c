#include <stdio.h>

int main() {
    // code here
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
   
    int highNum = a > b ? a : b;
    highNum = highNum > c ? highNum : c;
    printf("%d", highNum);

    return 0;
}
