#include <stdio.h>
int main(){
    int ar[]={5,10,15,20,25,30,35,40,45,50},
    low=0,mid,count,item,
    high=sizeof(ar)/sizeof(int);
    printf("Enter Searching Item : ");
    scanf("%d", &item);

    while(low<=high){
        mid=(low+high)/2;
        if(ar[mid]==item){
            count=1;
            break;
        }else if(ar[mid]<item){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    if(count==1)
    printf("Item Found at Location : %d", mid);
    else printf("Item Not Found!");

    return 0;
}