#include<stdio.h>
#include<stdlib.h>

#include "D:/Git_Repositary/Hearder/Main.h"


int main(){
    
    printf("Hi Eric\n");
    Show();
    Math_Func(3,5);
    
    system("pause");
    return;    
}
void Show(){
     
     printf("Run Func\n");
}
int Math_Func(int a,int b){
    int c;
    
    c=a+b;
    printf("a:%d / b:%d / c:%d\n",a,b,c);
    return c;
}
