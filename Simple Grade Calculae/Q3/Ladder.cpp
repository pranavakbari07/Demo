#include <iostream>
using namespace std;

int main(){

   int a;
   char grade;
   cout << "enter your mark :";
   cin >> a;

   if (a>=90 && a<=100){
    cout << "A grade" << endl;
    cout << "Excellent Work ! You are eligible for the next level.";
   }
   else if (a>=80 && a<=90){
    cout << "B grade" << endl;
    cout << "Well done. You are eligible for the next level.";
   }
   else if (a>=70 && a<=80){
    cout << "C grade" << endl;
    cout << "Good job. You are eligible for the next level.";
   }
   else if (a>=60 && a<=70){
    cout << "D grade" << endl;
    cout << "You Passed, You are eligible for the next level.";
   }
   else if (a>=50 && a<=60){
    cout << "E grade" << endl;
    cout << "Sorry, you faild";
   }
   else{
    cout << "FALL" << endl;
   }
   
}