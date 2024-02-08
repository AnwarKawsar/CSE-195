#include<stdio.h>
#include <string.h>
struct student{
    int id;
    char name[50];
    float cg;
};
int main(){
    struct student s[3];
    for(int i=0; i<1; i++){
        printf("Enter ID: \n");
        scanf("%d",&s[i].id);
        printf("Enter name: \n");
        scanf("%s",&s[i].name);
        printf("Enter cgpa: \n");
        scanf("%f",&s[i].cg);
        fflush(stdin);
    }
    for(int j=0; j<1; j++){

        printf("%d %s %.2f",s[j].id,s[j].name,s[j].cg);  
          
    }
    return 0;
}