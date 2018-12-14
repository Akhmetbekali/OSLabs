#include<stdio.h>
#include<stdlib.h>


struct node{
  int value;
  struct node *next;
};

void insert(struct node *n, struct node *head){
  struct node* last = head; 
  struct node* node1;     
  while (last != NULL){
     node1 = last;
     last = last->next;
  }
  node1->next = n; 
}

void delete(struct node *head){
  struct node* last = head; 
  struct node* node2;    
  node2 = last;
  while (last != NULL){
     if(last->next == NULL){
        node2->next = NULL;
     }
     node2 = last;
     last = last->next;
  }
}


void printList(struct node *n){
  while (n != NULL){
     printf(" %d ", n->value);
     n = n->next;
  }
}

int main(){
  struct node* head = (struct node*)malloc(sizeof(struct node)); 
  struct node* second = (struct node*)malloc(sizeof(struct node));
  struct node* third = (struct node*)malloc(sizeof(struct node));
  
  head->value = 1;
  head->next = second;  
  second->value = 2; 
  second->next = third;  
  third->value = 3;
  third->next = NULL;

  printList(head);
  printf("\n");
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  newNode->value = 4;
  newNode->next = NULL;
  insert(newNode, head);
  printList(head);
  printf("\n");
  delete(head);
  printList(head);
}