#include <iostream>
using namespace std;

main(){
double length;
double width;
double height;
string unit;
double volume;
string meter;
string centimeter;
string kilometer;
string millimeter;
double totvolume;
cout << "enter length: " ;
cin >> length;
cout << "enter width: " ;
cin >> width;
cout << "enter height: " ;
cin >> height;
cout << "enter unit you want your answer in: " ;
cin >> unit;
volume = (length * width * height) / 3 ;
if(unit == "meter" ){
totvolume = volume ;
cout << "volume is " << totvolume ;
 }
if(unit == "millimeter" ){
totvolume = volume * (1000 * 1000 * 1000) ;
cout << " volume is " << totvolume ;
 }
if(unit ==" centimeter" ){
totvolume = volume * (100 * 100 * 100)   ;
cout << " volume is " << totvolume ;
 }
if(unit == "kilometer"){
totvolume = volume / (1000 * 1000 * 1000)  ;
cout << " volume is " << totvolume ;
 }
cout << "your volume is " << totvolume ;
}