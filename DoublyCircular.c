#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node{
        int data;
        struct node * next;
        struct node * prev;
    };

    struct node * tail, * newnode , * head, * temp;
    head = 0;
    int ch=1;

    while(ch == 1){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Value");
        scanf("%d", &newnode->data);

        if(head == 0){
            head = tail = newnode;
            head-> next = head;
            head-> prev = head;
        }else{
            tail -> next = newnode;
            newnode -> prev = tail;
            head -> prev = newnode;
            tail = newnode;
        }

        printf("want to continue ?");
        scanf("%d", &ch);
    }temp = head;

    do{
      printf("%d", temp-> data);
      temp = temp -> next;  
    } while (temp!= tail);
      printf("%d", temp-> data);
    
}