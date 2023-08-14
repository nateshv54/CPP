#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*The GCD of 45 and 30 will be :
  Factors of 45 are 3 X 3 X 5
 Factors of 30 are 2 X 3 X 5
 Common factors of 45 and 30 are : 3 X 5 ,
  So the required GCD will be 15
*/
int gcd(int m,int n){
    if(m==0||n==0){
        return (m+n);
    }
    if(m==n){
        return m;
    }
    if(m>n){
        return gcd(m-n,n);
    }
    return gcd(m,n-m);
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<"GCD is"<<gcd(m,n);
    return 0;
}