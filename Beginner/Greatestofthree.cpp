#include<iostream>
using namespace std;

int main(){
    int a,b,c,k;
    cin>>a>>b>>c;
    k=((a>b?(a>c?a:c):(b>c?b:c)));
    cout<<k<<" is greatest of three numbers";

   return 0;
}