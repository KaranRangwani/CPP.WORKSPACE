#include<iostream>
using namespace std ; 
int main () {
    int n ; 
    cout<<"Enter the desired number "<<endl ;
    cin>>n ;
    int count = 0 ; 
    int sum = 0 ; 
    while(n>0){
        int rem = n%10 ; 
        sum = sum + rem ; 
        n = n/10 ; 
        count++ ;
    }     
    cout<<"The number of digits in the number is "<<count<<endl;
    cout<<"The sum of digits in the number is "<<sum<<endl;
    return 0 ;
}