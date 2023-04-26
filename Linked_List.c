//Implementation of Linked list in C Programming language
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};

struct node *start = NULL;
void frontinsert(int);
void endinsert(int);
void display();
void frontdel();
void enddel();
int count = 0;

int main () {
  int i, data;

do{
    printf("\n1. Insert an element at the beginning of linked list.\n2. Insert an element at the end of linked list.\n3.Display the elements in the linked list.\n4.Delete the element at the front position.\n5.Delete the element at the last positions\n6.Exit\n");
    scanf("%d", &i);
    switch(i){
        case 1:
        printf("Enter the Data : ");
        scanf("%d", &data);
        frontinsert(data);
        break;
        case 2:
        printf("Enter the Data : ");
        scanf("%d", &data);
        endinsert(data);
        break;
        case 3:
        display();
        break;
        case 4:
        frontdel();
        break;
        case 5:
        enddel();
        break;
        case 6:
        printf("\nThe program has been executed successfully\n");
        printf("\n");
        break;
        default:
        printf("\nInvalid input ! ! ! ! Enter a proper input : ");
        break;

    }
  }while(i!=6);

  return 0;
}

void frontinsert(int x) {
  struct node *t;
  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;
  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }
  t->next = start;
  start = t;
}

void endinsert(int x) {
  struct node *t, *temp;
  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;
  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }
  temp = start;
  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}

void display() {
  struct node *t;
  t = start;
  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  printf("There are %d elements in linked list.\n\t", count);

  while (t->next != NULL) {
    printf("%d\t", t->data);
    t = t->next;
  }
  printf("%d\t", t->data); // Print last node
}

void frontdel() {
  struct node *t;
  int n;

  if (start == NULL) {
    printf("\nLinked list is empty.! ! ! ! !\n");
    return;
  }

  n = start->data;
  t = start->next;
  free(start);
  start = t;
  count--;

  printf("Deleted Element(From the front) =\t%d\n", n);
}

void enddel() {
  struct node *t, *u;
  int n;

  if (start == NULL) {
    printf("\nLinked list is empty.! ! ! ! ! ! !\n");
    return;
  }

  count--;

  if (start->next == NULL) {
    n = start->data;
    free(start);
    start = NULL;
    printf("Deleted Element(From the End) =\t%d\n", n);
    return;
  }

  t = start;

  while (t->next != NULL) {
    u = t;
    t = t->next;
  }
    n = t->data;
    u->next = NULL;
    free(t);
    printf("Deleted Element(From the End) =\t%d\n", n);
}