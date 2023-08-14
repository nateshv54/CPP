#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int perfectnum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    n==perfectnum(n)?cout<<"Perfect Number":cout<<" Not a perfect number";
    return 0;
}