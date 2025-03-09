
#include <iostream>
using namespace std;

int main(){

   int a;
   cout << "Enter your mark :";
   cin >> a;

   if (a>=90 && a<=100){
    cout << "A grade";
   }
   else if (a>=80 && a<=90){
    cout << "B grade";
   }
   else if (a>=70 && a<=80){
    cout << "C grade";
   }
   else if (a>=60 && a<=70){
    cout << "D grade";
   }
   else if (a>=50 && a<=60){
    cout << "E grade";
   }
   else if (a>=40 && a<=50){
    cout << "F grade";
   }
   else{
    cout << "FALL";
   }
}
