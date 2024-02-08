#include<stdio.h>
int main(){
    char s[50];
    scanf("%s", s);
    int vowlelen=0;
    for(int i=0;s[i];i++){

        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowlelen++;
        }
    }
        printf("%d\n", vowlelen);
        return 0;
}