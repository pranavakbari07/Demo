#include <iostream>
using namespace std;

int main(){

   int a;
   cout << "Enter your mark :";
   cin >> a;

   switch (a){
    case 1:
       cout << "A grade";
    break;
    case 2:
       cout << "B grade";
    break;
    case 3:
       cout << "C grade";
    break;
    case 4:
       cout << "D grade";
    break;
    case 5:
       cout << "E grade";
    break;
    case 6:
       cout << "F grade";
    break;
    default:
       cout << "Fall";
    break;
    }
}