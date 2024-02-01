#include <stdio.h>

int main(){
    FILE *fptr; char ch;
    fptr = fopen("try.txt", "r");
    ch = fgetc(fptr);
    while(ch != EOF){
        if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u'){
            printf("%c", ch);
        }
        ch = fgetc(fptr);
    }

    return 0;

}