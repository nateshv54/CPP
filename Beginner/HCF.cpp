#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
HCF ( Highest Common Factor ) of two numbers is 
the largest positive integer that can divide both the numbers
*/
int hcf(int k,int j){
    if(k==0||j==0){
        return (k+j);
    }
    if(k==j){
        return k;
    }
    if(k>j)
    return hcf(k-j,j);
    else
    return hcf(k,j-k);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<hcf(n,m);
    return 0;
}