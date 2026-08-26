#include<iostream>
using namespace std ; 
int main() {
float firstnumber ; 
float secondnumber ; 

char op ; 
cout<<"=========================="<<endl ; 
cout<<"        CALCULATOR"<<endl ; 
cout<<"=========================="<<endl ; 
cout<<"Enter first number: "<<endl ; 
cin>>firstnumber ;
cout<<"Enter operations (+,-,*,/,%): "<<endl ; 
cin>>op ; 
cout<<"Enter second number : "<<endl ; 
cin>>secondnumber ; 
cout<<"The answer is : "<<endl ; 
if (op == '+'){
cout<< firstnumber + secondnumber<<endl ; }
else if (op == '-'){
cout<< firstnumber - secondnumber<<endl ;} 
else if (op == '*'){  
cout<< firstnumber * secondnumber<<endl; }  
else if (op == '/'){ 
cout<< firstnumber / secondnumber<<endl ; }
else if (op == '%'){  
cout<< firstnumber * secondnumber/100<<endl; }
 if (secondnumber == 0 && op == '/'){
    cout<<"Error in division, can't be divivded by zero !"<<endl ;}
    else if(op != '+' && op != '-' && op != '*' && op != '/' &&  op != '%' ) {
        cout<<"Error , please enter valid operation !!!!"<<endl ;}     
return 0 ; 
}