#include <stdio.h>
#include <dos.h>

int main(){
    int ar[10], ch, val, i, top=-1;

    do{
        printf("\n 1. Insert 2. Travel 3. Delete 4. Exit \n");
        printf("\n Choose Your Option : \n");
        scanf("%d", &ch);

        switch (ch){
        case 1:
            printf("\n 1. Insert at End \n");
            printf("\n 1. Insert at Start \n");
            printf("\n 1. Insert at End Location \n");
            scanf("%d", &ch);
 
            switch (ch){
            case 1: //Insert Program
                printf("Enter Value : ");
                scanf("%d", &val);
                top++;
                ar[top]=val;
                break;
            
            case 2: //Insert at Start
                printf("Enetr Value : ");
                scanf("%d", &val);
                for ( i = top; i >= 0; i--){
                    ar[i] = ar[i-1];
                } 
                top++;
                ar[0]=val;
                break;

            case 3: //Insert at Location
                break;

            default:
                printf("Wrong Input !");
                break;
            }
            break;

        case 2: //Prints the elements of Array
        for ( i = 0; i <= top; i++){
            printf("%d", ar[i]);
        }
        break;
        
        case 3: //Deletion Operation
        top--;
        break;
 
        case 4: //Ends the Program
        break; 
        } 

    } while (1);
    
    return 0;
}