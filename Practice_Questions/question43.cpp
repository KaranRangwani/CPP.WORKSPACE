#include<iostream>
using namespace std ; 
int main() { 
    int n ; 
    cout<<"Enter the desired number "<<endl ;
    cin>>n; 
    int original , rev = 0 ; 
    original = n ;
    while(n>0){
        int rem = n%10 ;
        rev = rev*10 + rem ; 
        n=n/10 ; 

    }
    if (original == rev){
        cout<<"The number is a Palindrome"<<endl; 

    }
    if (original !=rev){
    cout<< "The number is not Palindrome"<<endl;
    } 
    return 0 ; 
}