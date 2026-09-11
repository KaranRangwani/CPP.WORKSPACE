#include<iostream>
using namespace std ; 
int main() {
    int n ; 
    cout<<"Enter the number to get to know the nature of the number"<<endl ; 
    cin>>n;
    if(n>0){
        cout<<"The number you have entered is Positive"<<endl ; 
    }
    else if (n==0){
        cout<<"You have entered ZERO!"<<endl; 
    }
    else if(n<0){
        cout<<"You number you have entered is Negative"<<endl ; 
    }
    return 0 ; 
}