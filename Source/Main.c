#include<stdio.h>
#include<stdlib.h>

#include "D:/Git_Repositary/Hearder/Main.h"
#include "D:/Git_Repositary/Hearder/Math.h"

int main(){
    
    printf("Hi Eric\n");
    Show();
    Math_Func(3,5);
    printf("Adder:%d /Sub:%d /Multi:%d /Div:%d\n",Adder(1,2),Subtractor(6,2),Multi(3,5),Divider(9,3));
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
int Adder(int a, int b){
    return a+b;
}

int Subtractor(int a, int b){
    return a-b;
}

int Multi(int a, int b){
    return a*b;
}

int Divider(int a, int b){
    return a/b; 
}
