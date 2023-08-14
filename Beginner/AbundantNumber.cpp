#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6 

The sum of these factors is 16 it is greater than 12 
So it is an Abundant number

Some other abundant numbers: 

18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
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

bool abudantnum(int k){
    if(factors(k)>k){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    abudantnum(n)?cout<<"Abundant Number":cout<<"NOt abundant number";
    return 0;
}