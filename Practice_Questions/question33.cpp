// Making miultiplication table using while loops 
#include<iostream>
using namespace std ; 
int main() { 
    int i = 6 ; 
    while(i<=6){
        int j = 1 ; 
        while(j<=10){ 
            cout<<i<<"*"<<j<<"="<<i*j<<endl ; 
            j++ ; 
             
        }
        i++ ; 
    }
    return 0 ; 
}