#include <stdio.h>
#include <stdio.h>

int main(){
    struct node{
        int data;
        struct node * next;
    };

    struct node *head, *newnode, *tail, *temp;
    head = 0;
    int ch=1;

    while(ch == 1){
        newnode = (struct node *) malloc(sizeof(struct node));
        printf("Enter Value : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if(head == 0){
            head = tail = newnode;
            tail-> next = head;
        }else{
            tail -> next = newnode;
            tail = newnode;
            tail -> next = head;
        }

        printf("want to continue : ");
        scanf("%d", &ch);
    }

    temp = head;

    do{
        printf("%d", temp->data);
        temp = temp->next;
    }while (temp != tail);
    return 0;
    
}