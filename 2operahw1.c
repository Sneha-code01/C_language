#include <stdio.h>
int main(){

    int x;
    printf("enter the number x:\n");
    scanf("%d", &x);
    int x2;
    printf("enter the number x2:\n");
    scanf("%d", &x2);
    int x3;
    printf("enter the number x3:\n");
    scanf("%d", &x3);
    int aver = ((x+x2+x3)/3);
    printf("%d is average of these three numbers\n", aver);
    printf("%d x is smallest if it display 1\n", x<x2&&x<x3);
    printf("%d x2 is smallest if it display 1\n", x2<x&&x2<x3);
    printf("%d x3 is smallest if it display 1", x3<x&&x3<x2);
    return 0;
}