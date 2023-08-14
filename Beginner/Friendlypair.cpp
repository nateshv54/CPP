#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Two numbers num1 & num2 are friendly pairs if
 the following holds true -

(Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2
*/
int factors(int f){
    int sum=0;
    for(int i=1;i<f;i++){
        if(f%i==0){
            sum+=i;
        }
    }
    return sum;
}

bool friendlypair(int k,int l){
    if((factors(k)/k)==(factors(l)/l)){
        return true;
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    friendlypair(n,m)?cout<<"Friendly Pair":cout<<"Not a Friendly pair";
    return 0;
}