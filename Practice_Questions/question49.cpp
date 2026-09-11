#include<iostream>
using namespace std ; 
int main(){
    int a ; 
    int b ; 
    cout<<"Enter the value of Ist number "<<endl;
    cin>>a;
    cout<<"Enter the value of IInd number "<<endl;
    cin>>b;
    if(a>b){
        cout<<"The larger number out of a and b is : " <<a<<endl ; 
    }
    else if (b>a){
        cout<<"The larger number out of a and b is : " <<b<<endl ;
    }
    return 0 ; 
}