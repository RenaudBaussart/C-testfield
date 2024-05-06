#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
  int nbr = 0;
  cout << "enter a nbr between 1 and 5\n";
  cin >> nbr;
  switch (nbr)
  {
  case 1:
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 2:
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 3:
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 4:
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 5:
    cout << "well play you have enter:" << nbr << endl;
    break;
  default:
    cout << "plz enter a number between 1 and 5\n";
    break;
  }
  return 0;
}