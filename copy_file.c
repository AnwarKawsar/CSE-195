#include<stdio.h>
int main(){
    FILE *f,*f1;
    char a;
    f=fopen("from.txt","r");
    f1=fopen("to.txt","w");
    if(f==NULL){
        printf("Invalid file");

    }else{
        while((a=fgetc(f))!=EOF){
            putc(a,f1);
            }

    }
    return 0;

}