#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a ;
    if(a%2==0){
        cout << a <<"is a postive number";
    }
    else if(a<0){
        cout << a <<"is a negative number";
    }
    else{
        cout << a <<" is zero"; 
    }
    return 0;
}