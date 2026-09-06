#include<iostream>
using namespace std ; 
int main() {
    int n ; 
    cout<<"Enter the desired number "<<endl ; 
    cin>>n ; 
    int factorial = 1 ;
    for (int i = 1 ; i<=n ; i++){
        factorial = factorial * i ; 
    }
    cout<<"The factorial of the number "<<n<<" is "<<factorial<<endl ; 
    return 0 ; 
}