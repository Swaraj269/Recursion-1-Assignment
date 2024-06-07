// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.

#include <iostream>
using namespace std;
int sumOfOdd(int a, int b){
    if(a>b){
        return 0;
    }
    if(a%2!=0){
        return a+sumOfOdd(a+2,b);
    }
    return sumOfOdd(a+1,b);
}
int main(){
    int a;
    cout<< "Enter the first number: ";
    cin>>a;
    int b;
    cout<< "Enter the second number: ";
    cin>>b;
    cout<< sumOfOdd(a,b);
    return 0;
}