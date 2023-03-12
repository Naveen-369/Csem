#include <stdio.h>
#include <stdlib.h>
/*Declaration of Push, pop and top function for stack operation*/
const int MAX=12;
int stack[12];
int top=-1;
void push(int);
void pop();
void top_e();
int main(){
    push(5);
    push(8);
    push(9);
    push(2);
    pop();
    pop();
    top_e();
    }

void push(int data){
    if (top==MAX){
        printf("\nStack overflow ! ! ! ! ! ! ! ! !\n");
        return;
    }
    else{
        top+=1;
        stack[top]=data;
    }
}

void pop(){
    if(top==-1){
        printf("\nStack underflow ! ! ! ! ! ! ! ! ! ! ! ! !\n");
        }
    else{
        printf("\n%d",stack[top]);
        top-=1;
        return;}
}

void top_e(){
    printf("\n%d at the position %d",stack[top],top);
    return;
}
