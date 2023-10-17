#include <stdio.h>
int main(){
    int ar[]={5,10,15,20,25,30,35,20,45,50},i, count=0, item;
    printf("Enter Searching Elment : ");
    scanf("%d", &item);

    for(i=0; i<10; i++){
        if(ar[i]==item){
            count=1;
                if(count==1){
                    printf("Element Found at : %d \n", i+1);
                }
            continue;
        }
    }

    if(count==0){
        printf("Element Not Found!");
    }
    return 0;
}