#include <stdio.h>
#include <string.h>
int rear=-1,front=-1;
int queue[10];
int max=10;
/*Function declaration*/
void enqueue(int a);
int dequeue();
void display();
int main(){
    enqueue(12);
    enqueue(35);
    enqueue(10);
    enqueue(30);
    int x=dequeue();
    printf("%d\n",x);
    display();
    return 0;
}
/*Enqueue function*/
void enqueue(int a){
    if(front==-1){
        front=0;
        rear=0;
        queue[rear]=a;
    }
    else if(rear==max){
        printf("Queue is full\n");
    }
    else{
        rear++;
        queue[rear]=a;
    }
}

/*Dequeue Function*/
int dequeue(){
    if((front==-1)||(front==rear)){
        printf("Queue is empty\n");
        return 0;
    }
    else{
        int temp=queue[front];
        front++;
        return temp;
    }
}
/*Display function*/
void display(){
    if((front==-1)||(front==rear)){
        printf("Queue is empty\n");
    }
    else{
        printf("THe element are : ");
        for(int i=front;i<rear;i++){
            printf("%d, ",queue[i]);
        }
        printf("%d",queue[rear]);
    }
}