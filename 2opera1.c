#include <stdio.h>

int main(){

    char star = '**';// 2 character aagyi toh ye memory mei store nhi ho payega

    int x;
    printf("enter the number to check divisibilty by 2:");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}