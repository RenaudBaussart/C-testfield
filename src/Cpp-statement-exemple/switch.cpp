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
  case 1://in case the nbr var is 1 do that
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 2://in case the nbr var is 2 do that
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 3://in case the nbr var is 3 do that
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 4://in case the nbr var is 4 do that
    cout << "well play you have enter:" << nbr << endl;
    break;
  case 5://in case the nbr var is 5 do that
    cout << "well play you have enter:" << nbr << endl;
    break;
  default://in other case 
    cout << "plz enter a number between 1 and 5\n";
    break;
  }
  return 0;
}