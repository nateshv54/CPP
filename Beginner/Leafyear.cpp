#include <iostream>
using namespace std;

int main(){
    int y;
    cin>>y;
    if(y%4==0 && y%100==0){
        cout<<y<<" is leaf year";
    }
    else{
        cout<<y<<" is not leaf year";
    }


    return 0;
}