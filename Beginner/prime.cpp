#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isprime(int p){
    if(p<=1){
        return false;
    }
    for(int j=2;j<p;j++){
        if(p%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int p;
    cin>>p;
    isprime(p)? cout<<p<<" is prime":cout<<p<<" is not prime";
    return 0;
}