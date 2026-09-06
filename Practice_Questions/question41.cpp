#include<iostream>
using namespace std ; 
int main() { 
    int n ; 
    cout<<"Enter the desired number "<<endl ; 
    cin>>n ;
    int count = 0 ;
    while(n>0){
        n = n/10;  
        count++ ; 
    }
    cout<<"The number of digits in this given number is "<<count<<endl ; 
    return 0 ; 

    }
