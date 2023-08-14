#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int sum=0,k;
    while(n>0){
        int r=n%10;
        k=r*r*r;
        sum+=k;
        n/=10;
    }
    return sum;
}

int main(){
    int a;
    cin>>a;
    a==armstrong(a)?cout<<"Armstrong":cout<<"Not an armstrong";
    return 0;
}