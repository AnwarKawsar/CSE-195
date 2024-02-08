#include<stdio.h>
int string_length(char sl[]){
    int m = 0;
    for(int i = 0; sl[i]!='\0' ; i++){
        m++;
    }
    return m;
}
int main(){
    char stn[500];
    gets(stn);
    printf("%d\n", string_length(stn));
    return 0;
}