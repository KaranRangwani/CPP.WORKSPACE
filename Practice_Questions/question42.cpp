#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout<<"Enter the desired number "<<endl ;
    cin>>n ;
    int rev = 0 ; 
    int count = 0 ; 
    while(n>0){
        int rem = n%10 ; 
        rev = rev*10 + rem ; 
        n = n/10 ; 
    }
    for (int i = rev ; i>0 ; i = i/10){
        count++ ; 
    }
    
    cout<<"The reverse of the number is "<<rev<<endl ;
    cout<<"The number of digits in the number is "<<count<<endl ;
    return 0 ; 
}