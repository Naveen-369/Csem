#include <stdio.h>
#include <string.h>
int top=-1;
int MAX=10;
int stack[10];
void push(int a);
int pop();
void display();
int main(){  
    push(34);
    push(23);
    push(12);
    pop();
    display();
    return 0;
}
void push(int a){
    if(top==MAX){
        printf("THe stack is full.\n");
    }
    else{
        top++;
        stack[top] = a;
    }
}
int pop(){
    if(top<0){
        printf("Stack underflow.\n");
    }
    else{
        int temp=stack[top];
        top--;
        return temp;
    }
}
void display(){
    if(top<0){
        printf("Stack underflow.\n");
    }
    else{
        for(int i=top;i>0;i--){
            printf("%d, ",stack[i]);
        }
        printf("%d",stack[0]);
    }
}