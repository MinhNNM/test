// #include<bits/stdc++.h>
// using namespace std;
// bool ngto(long long n){
//     if(n<2)
//         return false;
//     for(int i=2; i<=sqrt(n); i++)
//         if(n%i==0)
//             return false;
//     return true;   
// }
// bool dao(long long n){
//     long long s=0;
//     while (n>0){
//         s=s*10+n%10;
//         n/=10;
//     }
//     if(ngto(s))
//         return true;
//     return false;
// }
// bool tong(long long n){
//     long long sum=0;
//     while (n>0){
//         sum+=n%10;
//         n/=10;
//     }
//     if(ngto(sum))
//         return true;
//     return false;
// }
// bool chu_so(long long n){
//     int check=1;
//     while(n>0){
//         if(ngto((long long)(n%10))==false)
//             check=0;
//         n/=10;
//     }
//     if(check==1)
//         return true;
//     return false;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int k, dem=0;
//         cin >> k;
//         long long a=pow(10, k-1), b=pow(10, k);
//         for(long long i=a; i<b; i++){
//             if(ngto(i) && dao(i) && chu_so(i) && tong(i))
//                 dem++;
//         }
//         cout << k << " " << dem << endl;
//     }
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[100];
        gets(s);
        for(int i=0; i<strlen(s); i++){
            if(s[i]>=65 && s[i]<= 90)
                s[i]+=32;
        }
        char a[100][100];
        int cnt=0;
        char *token = strtok(s , " \n");
        while(token != NULL){
            strcpy(a[cnt++],token);
            token = strtok(NULL, " \n");
        }   
        for(int i=0; i<cnt; i++){
            a[i][0] -=32;
            if(i!=cnt-1)
                printf("%s ",a[i]);
            else
                printf("%s",a[i]);
        }
        printf("\n");
    }
}