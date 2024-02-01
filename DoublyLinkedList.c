#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node{
        int data;
        struct node * next;
        struct node * prev;
    };

    struct node *head, *temp, *newnode;
    head = 0;
    int ch=1;

    while(ch == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Value : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;

        if(head == 0){
            head = temp = newnode;
        }else{
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
        }

        printf("want to continue : (1, 0) : ");
        scanf("%d", &ch);
    }
    
        temp = head;

        while (temp -> next != 0){
            printf("%d", temp->data);
            temp = temp-> next;
        }
            printf("%d", temp->data);
    return 0;
}