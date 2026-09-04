#include<iostream>
using namespace std;        
int main() { 
    /*Loops in c++*/ 
    //There are three types of loops in c++ 
    //1. For loop
    //2. While loop
    //3. Do-While loop  

    // For loop 
   /* for (int i = 1 ; i <= 9 ; i+=2) { 
        cout<<i<<endl ; 
    }*/

    //while loop 
    /*int i = 3 ; 
    while (i<=30){
        cout<<i<<endl ; 
        i++ ;  
    }*/
   //Do-While loop 
   int i = 1 ; 
   do{
    cout<<i<<endl; 
    i++ ; 
   }while (i<=20) ; 
    return 0 ; 
}