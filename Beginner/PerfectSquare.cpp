#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool perfectsquare(long double m){
    if(m>=0){
        long long sq=sqrt(m);
        return (sq*sq==m);
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    perfectsquare(n)?cout<<"Perfect Square":cout<<" Not a Perfect Square";
    return 0;

}