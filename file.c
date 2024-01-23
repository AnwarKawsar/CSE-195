#include<stdio.h>
int main(){
    FILE *f1, *f2;
    f1 =fopen("input.txt","r");
    f2 =fopen("output.txt","a");
    if(f1==NULL){
        printf("fill not found");
        return 0;
    }
    int x,y;
    fscanf(f1,"%d %d",&x,&y);
    fprintf(f2,"%d+%d=%d\n",x,y,x+y);
    fclose(f1);
    fclose(f2);
    return 0;
}