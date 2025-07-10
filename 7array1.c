#include <stdio.h>

int main(){

   int marks[3];//maximum index h 3 iska matlab 2 tak jayega aur c mei starting 0 se hota h
   printf("the percentage needed to pass is 85\n");
   printf("enter your physics marks\n");//scanf mei %d pe \n lga dene ke karan aage execute nhi kar paya 
   scanf("%d", &marks[0]);
   printf("enter your chemistry marks\n");
   scanf("%d", &marks[1]);
   printf("enter your maths marks\n");
   scanf("%d", &marks[2]);
   int per = ((marks[0]+marks[1]+marks[2])/3);
   printf("the percentage obtained %d\n", per);
   //isme sirf ek variable define karke jitna chahe utna input le sakte h


   return 0;

}