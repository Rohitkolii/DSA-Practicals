#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int low, int high){
    int pivot = A[high];
    int i = (low-1);

    for (int j = low; j < high; j++){
        if(A[j] <= pivot){
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[high]);
    return i+1;
}

void printArray(int A[], int size){
    for (int i = 0; i < size; i++){
        printf("%d \t", A[i]);
    }
    printf("\n");
}

void quickSort(int A[], int low, int high){
    if(low < high){
        int pi = partition(A, low, high);
        quickSort(A, low, pi-1);
        quickSort(A, pi+1, high);
    }
}

int main(){
    int data[] = {5, 17, 3, 6, 1, 8, 2, 19};
    int n  = sizeof(data) / sizeof(data[0]);

    printf("Unsorted Array : ");
    printArray(data, n);

    quickSort(data, 0, n-1);

    printf("Sorted Array : ");
    printArray(data, n);
    return 0;
}