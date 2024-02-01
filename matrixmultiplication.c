#include <stdio.h>

int main(){
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    int sum;

    printf("Enter Value for Matric 1 : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat1[i][j]);
        }
        // printf("\n");
    }

    printf("Enter Value for Matric 2 : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat2[i][j]);
        }
        // printf("\n");
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mat3[i][j]=0;
            for(int k=0; k<3; k++){
                mat3[i][j] = mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("multiplication of Matric : \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d \t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}