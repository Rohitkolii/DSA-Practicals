#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int data){
    if(top == 4){
        printf("Stack is full !");
    }else{
        top++;
        stack[top] = data;
    }
}

void pop(){
    if(top== -1){
        printf("Stack is empty !");
    }else{
        printf("Popped element : %d", stack[top]);
        top--;
    }
}

void display(){
    int i;
        for(i=top; i>=0; i--){
            printf("%d", stack[i]);
        }
        printf("\n");
}

int main(){
    int ch;
    while (1){
        printf("1. Push    2. pop     3. display \n");
        printf("Enter choice : \n");
        scanf("%d", &ch);

        switch(ch){
            case 1:
            printf("Enter Value : \n");
            scanf("%d", &ch);
            push(ch);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            default:
            printf("Wrong input!");
            break;
        }
    }
    return 0;
}