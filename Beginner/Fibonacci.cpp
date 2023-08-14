#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//To Print Nth number of fibonacci series
/*
What is a Fibonacci Series and Find the Nth Term of the Fibonacci Series?
The Fibonacci numbers, commonly denoted F(N) form a sequence, called the Fibonacci series, such that each number is the sum of the two preceding ones, starting from 0 and 1.

That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given N, calculate F(N).

Example 1:
Input:n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1
*/
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}


int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<"\n";
    //To print series upto Nth term
    for(int i=0;i<n;i++){
        cout<<fib(i)<<", ";
    }
    return 0;
}