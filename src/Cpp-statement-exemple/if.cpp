#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
  int nbrimput;
  cout << "entre un nombre entier\n";
  cin >> nbrimput;
  if (nbrimput < 500){
    cout << "tu a entrée un nombre en dessous de 500\n";
  }
  if (nbrimput > 500){
    cout << "tu a entrée un nombre aux desus de 500\n";
  }
  else{
    cout << "tu a entrée 500\n";
  }
  return 0;
}