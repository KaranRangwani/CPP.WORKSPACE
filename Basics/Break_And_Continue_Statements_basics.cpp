#include <iostream>
using namespace std;

int main() {
   /*for (int i = 0 ; i<20 ; i++){
        cout<<i<<endl ; 
        if(i==19){
            break ; 

        }
    }*/

   /* for (int i = 0  ; i<20 ; i++){
        if(i==5){
            break ; 
             
        }cout<<i<<endl ; 
    }*/

    for (int i = 0 ; i<20 ; i++){
        if(i==9){
            continue ; 
        }
        cout<<i<<endl ; 
    }
    return 0;
}