#include<iostream> 
#include<iomanip>
using namespace std ; 
int main(){
  //  Selection control system - If else - ladder
    int age ; 
   cout<<"Tell me your age : "<<endl ; 
    cin>>age ; 
    /*if(age >= 18 && age <=70){
        cout<<"You can vote !!"<<endl ; }
        else if (age > 70){
            cout<<"You can vote but need to verify your voter card !!"<<endl ;} 
        else{
            cout<<"You cant vote !!"<<endl ;
        }*/
       // Selection control system - Switch case
       switch (age){
        case 18 : 
        cout<<"You can vote !!"<<endl ;
        break ; 
        case 70 : 
        cout<<"You can vote but need to verify your voter card !!"<<endl ;
        break ; 
        case 17 :  
        cout<<"You cant vote !!"<<endl ;
        break ; 
        default : 
        cout<<"No special cases!!"<<endl ;
       }
    }
