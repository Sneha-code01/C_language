#include <stdio.h>
int main(){
int n; 
printf("enter n for factorial:\n");
scanf("%d",&n);
int fact = 1;
for (int i = 1; i <= n; i++)
{
    fact=fact*i;
}
    printf("%dis fact of n", fact);


return 0;
  
}