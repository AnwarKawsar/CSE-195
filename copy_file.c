#include<stdio.h>
int main(){
    FILE *f,*f1;
    char a;
    f=fopen("input.txt","r");
    f1=fopen("output.txt","w");
    if(f==NULL){
        printf("Invalid file");

    }else{
        while((a=fgetc(f))!=EOF){
            fputc(a,f1);
        }
    }
return 0;
}