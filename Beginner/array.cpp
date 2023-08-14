#include<iostream>
using namespace std;

boolean static isprime(int p){
    if(p==0||p==1){
        return false;
    }
    for(int j=2;j<p;j++){
        if(p%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int p;
    cin>>p;
    if(isprime(p)==true){
        cout<<p<<" is prime";

    }

    return 0;

}