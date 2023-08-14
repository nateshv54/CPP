#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int d){
    int sum=0;
    while(d>0){
        int r=d%10;
        sum+=r;
        d/=10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"Sum of digits "<<sumofdigits(n);
    return 0;
}