#include <stdio.h>
#include <stdlib.h>
int stack[7];
int top=-1;
void push(int data){
    if (top==4){
        printf("Stack overflow\n");
        return;
    }
    else{
        top+=1;
        stack[top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("Stack underflow\n");
        }
    else{printf("\n%d",stack[top]);
    top-=1;
    return;}
}
int main(){
    push(5);
    push(8);
    push(9);
    push(2);
    pop();
    pop();
}