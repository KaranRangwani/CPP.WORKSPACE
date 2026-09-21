#include<iostream>
using namespace std ; 
int main(){
    int a , b , c; 
    cout<<"Enter the values of a , b , c "<<endl ; 
    cin>>a ; 
    cin>>b ; 
    cin>>c ; 
    if(a >= b && a>=c){
        cout<<"The largest coutput is : "<<a<<endl; 
    }
    else if(b >= a && b>=c){
        cout<<"The largest output is : "<<b<<endl;
    }
    else if(c>=a && c>=b){
        cout<<"The largest output is : "<<c<<endl;
    }
   
    return 0 ; 
    }
