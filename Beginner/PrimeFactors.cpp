#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isprime(int i){
    if(i<=1){
        return false;
    }
    for(int j=2;j<i;j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<"Prime Factors are ";
    for(int i=1;i<=n;i++){
        if(isprime(i)==true){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}