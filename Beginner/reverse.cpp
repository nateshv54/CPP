#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reversenum(int n){
    int rev=0;
    while(n!=0){ 
        int r=n%10;
        rev=rev*10+r;
        n/=10;

    }
    return rev;
}
string palindrome(string s){
    string p=s;
    reverse(p.begin(),p.end());
    return p;
}

int main(){
    int n;
    cin>>n;
    cout<<"reverse of number is "<<reversenum(n);
    string s;
    cin>>s;
    cout<<"reverse of string"<<s <<"  is  "<<palindrome(s);
    
}