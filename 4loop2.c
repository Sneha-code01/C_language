#include <stdio.h>

int main() {

    int n;
    printf("enter the number upto which u want count ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    
}