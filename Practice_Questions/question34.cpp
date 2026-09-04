//Making multiplication table using do while loops 
#include<iostream>
using namespace std ; 
int main() { 
    int i = 6 ; 
    do{
        int j = 1 ; 
        do{
            cout<<i<<"*"<<j<<"="<<i*j<<endl ; 
            j++ ; 
        }while(j<=10) ; 
        i++ ; 
    }while(i<=6) ; 
    return 0 ; 
}
