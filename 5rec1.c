#include <stdio.h>

void print(int count);

int main(){

    print(12);
    return 0;

}

//recursion function
void print(int count){
    if(count == 0){
        return; // kuch return nhi hoga
    }
    printf("hello world\n");
    print(count-1);
}