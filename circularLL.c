#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node {
        int data;
        struct node *next;
    };

    struct node *head, *newnode, * temp, *tail;
    head = 0;
    int ch = 1;

    while(ch == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Value : ");
        scanf("%d", &newnode->data);
        newnode -> next = 0;

        if(head == 0){
            head = temp = newnode;
        }else{
            temp -> next = newnode;
            temp = newnode;
            tail = temp;
        }tail -> next = head;
        temp = head;

        printf("want to continue : (0, 1) : ");
        scanf("%d", &ch);
    }

    while (temp ->next != tail){
        printf("%d", newnode -> data);
        temp = temp->next;
    }
    

    return 0;
}