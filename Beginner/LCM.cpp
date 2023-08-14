#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*HCF ( Highest Common Factor ) of two numbers
 is the largest positive integer that can divide both the numbers*/
int hcf(int x,int y){
    if(x==0||y==0){
        return (x+y);
    }
    if(x==y){
        return x;
    }
    if(x>y){
        return hcf(x-y,y);
    }
    return hcf(x,y-x);

}

int main(){
    int m,n;
    cin>>m>>n;
    int lcm=(m*n)/hcf(m,n);
    cout<<"LCM is :"<<lcm;
    return 0;
}