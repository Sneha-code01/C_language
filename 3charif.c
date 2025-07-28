#include <stdio.h>

int main(){

    char letter;
    printf("enter the letter :\n");
    scanf("%s", &letter);
    if (letter>= 'A' && letter<= 'Z')
    {
     printf("UPPER CASE");
    }else if (letter >= 'a' && letter <= 'z' )
    {
    printf("lower case");
    }else{
        printf("invalid letter");
    }
    return 0;
    
}