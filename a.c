#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[1000];
        fgets(s,sizeof(s),stdin);
        for(int i=0; i<strlen(s); i++){
            if(s[i]>=65 && s[i]<= 90)
                s[i]+=32;
        }
        char a[100][100];
        int cnt=0;
        char *token = strtok(s , " ");
        while(token != NULL){
            strcpy(a[cnt],token);
            cnt++;
            token = strtok(NULL, " ");
        }   
        for(int i=0; i<cnt; i++){
            a[i][0] -= 32;
            printf("%s",a[i]);
            if(i!=cnt-1)
                printf(" ");
        }
    }
}