// Given a positive integer, return true if it is a power of 2.

#include <iostream>
using namespace std;

bool sachai(int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    return sachai(n/2);
}
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    cout<< sachai(n);
    return 0;
}