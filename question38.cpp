#include<iostream> 
using namespace std ; 
int main () {
    int secret ; 
    cout<<"Enter the secret number"<<endl ; 
    cin>>secret ; 
    int guess ; 
    do{
        cout<<"Enter your guess"<<endl ; 
        cin>>guess ; 
        if(guess>secret){
            cout<<"Your guess is higher than the secret number"<<endl ;
        }
        if(guess<secret){
            cout<<"Your guess is lower than the secret number"<<endl ;
        }
    }while(guess!=secret) ; 
    cout<<"Congrats you guessed the secret number!!!!!!!!!"<<endl ; 
    return 0 ; 
}