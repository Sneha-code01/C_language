#include <stdio.h>

int main(){
int x;
printf("enter the character\n");
scanf("%d", &x);
printf("%d", x > 0 && x < 100);
return 0;
}