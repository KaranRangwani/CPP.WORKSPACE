#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout<<"Enter the number you want to enter to identify whether it's odd or even"<<endl ; 
    cin>>n;
    if(n%2==0){
        cout<<"The number you have entered is Even "<<endl ;
    }
    else{
        cout<<"The number you have entered is Odd "<<endl ; 
    }
    return 0 ;
}