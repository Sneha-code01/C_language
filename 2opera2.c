#include <stdio.h>

int main(){
 
int sunday = 1;
int snowing = 2 ;
printf("enter 1 if its sunday else 0\n");
scanf("%d", &sunday);
printf("enter 2 if its snowing else 0\n");
scanf("%d", &snowing);
printf("%d\n", sunday && snowing );
int monday = 8;
int raining = 4;
printf("enter 8 if its monday else 0\n ");
scanf("%d", &monday);
printf("enter 4 if its raining else 0\n");
scanf("%d", &raining);
printf("%d\n", monday || raining);
printf("%d\n", monday&&raining&&snowing);

return 0;

}