#include<stdio.h>

void fun(int n){
    if(n>0){
        printf("%d ", n); // Tail Recursion
        fun(n-1);
    }
}

int main(){
    int x = 3;
    fun(x);
    return 0;
}
