#include<iostream>
#include<iomanip>
using namespace std ; 
int main() {
//Constants in C++
//Jaise me agar kisi variable ko constant banana chahata hu to me uske aage const keyword ka use karunga
//bina constant keyword vairibale ko chanage karna ha toh , aise karo
  //const int a = 77 ; 
//cout<<"The value of a is :"<<a<<endl ; 
//a = 88 // you willl get an error because a is a constant . 
//int a = 55 , b = 778, c = 6399 ; 
//******** Manipulators in C++ *********** */
/*cout<<"The value of a without setw is : " <<a<<endl ;
cout<<"The value of b without setw is : "<<b<<endl ;
cout<<"The value of c without setw is : " <<c<<endl ;

cout<<"The value of a with setw is : " <<setw(4)<<a<<endl ;
cout<<"The value of b with setw is : "<<setw(4)<<b<<endl ;
cout<<"The value of c with setw is : " <<setw(4)<<c<<endl ;*/
//********** Operators Precedence ***********/
int a = 3 , b = 8 ; 
int c = ((((a * 5) / b) + 26) - 77 ); 
//Order of precedence is : 1. () 2. * / % 3. + -
cout<<"The value of c is : "<<setw(4)<<c<<endl ; 

return 0 ; 
}