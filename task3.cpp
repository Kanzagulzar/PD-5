#include <iostream>
using namespace std;
main(){
double needhour;
double remainhour;
double worker;
double time;
cout << "enter needed hours: " ;
cin >> needhour;
cout << "Remaining hours: " ;
cin >> remainhour;
if(needhour <= remainhour){
time = remainhour - needhour ;
cout << "Yes enough hours are left which are " << time;
 }
if(needhour >= remainhour){
time = needhour - remainhour ;
cout << "Not enough hours are available which are " << time;
 }
}
