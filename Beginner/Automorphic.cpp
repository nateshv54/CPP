#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*Automorphic number is a special number,
 whose’s square ends with the same digits as the number itself
 Ex: 5=5*5=25
     6=36
     ....
*/
bool automorphic(int n){
    int square=n*n;
    while(n!=0){
        if(n%10 != square%10){
            return false;
        }
        n/=10;
        square/=10;
    }
    return true;
}
int main(){
    int k;
    cin>>k;
    automorphic(k)?cout<<"Automorphic":cout<<"Not Automorphic";
    return 0;

}