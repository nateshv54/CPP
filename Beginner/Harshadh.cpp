#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
A Harshad number is a positive 
integer that is divisible by the
 sum of the digits of the integer.
  It is also called the Niven number.
  For Example : 153
Sum of digits = 1 + 5 + 3 = 9

153is divisible by 9 so 153 is a Harshad Number.
  */
bool harshadh(int k){
    int sum=0,m=k;
    
    while(k>0){
        int r=k%10;
        sum+=r;
        k/=10;
    }
  
    if(m%sum==0){
    return true;
    }
    return false;

}

int main(){
    int n;
    cin>>n;
    harshadh(n)?cout<<"Harshad Number":cout<<"Not a Harshad Number";
    return 0;
}