#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string bin,dec;
    cin>>bin;
    cout<<"Decimal equivalent "<< stoi(bin, 0, 2);
    cin>>dec;
    cout<<"Binary Equivalent is "<<stoi(dec,2,10);
    return 0;
}