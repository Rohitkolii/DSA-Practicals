#include <stdio.h>

int main(){
    int ar[7][6] ={{0,0,0,5,0,0},
                 {0,4,0,0,0,0},
                 {0,0,0,0,9,0},
                 {0,3,0,2,0,0},
                 {1,0,2,0,0,0},
                 {0,0,0,0,0,0},
                 {0,0,8,0,0,0}
                } , i, j;
    printf("Three tupple representation \n");

    for(i = 0; i<7; i++){
        for(j = 0; j<6; j++){
            if(ar[i][j] != 0){
                printf("%d \t %d \t %d \n", i, j, ar[i][j]);
            }
        }
    }
    return 0;
}