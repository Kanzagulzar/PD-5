#include <iostream>
using namespace std;
void cal(float price,string type);

main(){
float price;
string type;
float result;
cout << "Enter vehicle price: " ;
cin >> price;
cout << "enter type " ;
cin >> type;
cal(price, type);
}
void cal(float price, string type){
float tax;
float finprice;
char code;
cout << "Enter code: " ;
cin >> code;
 if(type == "motorcycle"){
  if(code == 'M'){
 tax =price * 0.06 ;
 cout << "your tax is " << tax ;
 }
  }
 if(type == "electric"){
  if(code == 'E'){
  tax = price * 0.08 ;
 cout << "your tax is " << tax ;
 }
}
 if(type == "sedan"){
  if(code == 'S'){
 tax = price * 0.1 ;
 cout << "your tax is " << tax ;
 }
}
 if(type == "van"){
  if(code == 'V'){
 tax = price * 0.12 ;
 cout << "your tax is " << tax;
 }
}
 if(type == "truck"){
  if(code == 'T'){
 tax = price * 0.15 ;
 cout << "your tax is " << tax ;
 }
}
finprice = price + tax ;
cout << "vehicle price is " << finprice ;
}