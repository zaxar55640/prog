#include<stdio.h>


int main() {
    int a, result;
    scanf("%d", &a);
    result = a >= 23 && a <= 45;
    printf("%d\n", result);

    int b, element;
    scanf("%d", &b);
    element = ((b >> 4) & 1);
    printf("%d\n", element);
    return 0;
}
