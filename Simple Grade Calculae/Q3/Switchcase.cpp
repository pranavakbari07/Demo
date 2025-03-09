#include <iostream>
using namespace std;
int main(){

   int a;
   cout << "Enter your mark :";
   cin >> a;

   switch (a){
    case 1:
    cout << "A grade" << endl;
    cout << "Excellent Work ! You are eligible for the next level.";
    break;
    case 2:
    cout << "B grade" << endl;
    cout << "Well done. You are eligible for the next level.";
    break;
    case 3:
    cout << "C grade" << endl;
    cout << "Good job. You are eligible for the next level.";
    break;
    case 4:
    cout << "D grade" << endl;
    cout << "You Passed, You are eligible for the next level.";
    break;
    case 5:
    cout << "E grade" << endl;
    cout << "Sorry, you faild";
    break;
    default:
      cout << "Better luck next time";
    break;
   }

}