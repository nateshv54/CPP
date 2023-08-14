#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Strong Numbers is a number in which 
the sum of the factorial of individual 
digits of the numbers is equal to the number itself.

For Example: 145 
145 = 1! + 4! + 5! =  145 */
//factorial using recursion
 int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

bool strongnum(int k){
    int m=k,sum=0,r;
    while(m>0){
        r=m%10;
        sum=sum+fact(r);
        m/=10;

    }
    if(sum==k){
        return true;
    }
    return false;

}

int main(){
    int j;
    cin>>j;
    strongnum(j)?cout<<"Strong Number":cout<<"Not a Strong Number";
    
    return 0;
}