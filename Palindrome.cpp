#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int y=0;
    while(n>0){
        int digit=n%10;
        y=y*10+digit;
        n=n/10;
    }
    int dummy=n;
    if(dummy==y){
        cout<<"Palindrome";
    }
        else
        cout<<"NOT";
    return 0;
}