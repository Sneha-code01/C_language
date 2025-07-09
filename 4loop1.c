#include <stdio.h>

int main(){
    //i++ mtlb i+1 ye shortcut sirf iske liye 
    /* i ++ pehle value print than increse
    ++i pehle increase than print */
    for (char j = 'a'; j <= 'z'; j= j+1)
    {
        printf("%c",j);
    }
    for (int i = 0; i < 101; i++)
    {
        printf("%d\n", i);
    }
    for (float n = 100.00; n < 0.00; n=n-0.01)
    {
        printf("%f\n", n);
    }
    
    
  return 0;  
}