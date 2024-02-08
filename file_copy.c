#include<stdio.h>
int main(){
    FILE *f,*f1;
    f = fopen("input.txt", "r");
    f1 = fopen("output.txt", "w");
    if (f == NULL){
        printf("0   ")  ;
    }
    char c;
    while((c=fgetc(f))!=EOF){
        
        fputc(c,f1);
    }
    fclose(f);
    fclose(f1);
    return 0;
}