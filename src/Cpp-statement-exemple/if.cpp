#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
  int nbrimnut;//declaration of the varable nbrinput
  cout << "entre un nombre entier\n";
  cin >> nbrinput;//get the input from the terminal into nbrimpute
  if (nbrimput < 500){//if under 500 do this
    cout << "tu a entrée un nombre en dessous de 500\n";
  }
  if (nbrimput > 500){//if highter 500 do this
    cout << "tu a entrée un nombre aux desus de 500\n";
  }
  else{//for all other instance do that
    cout << "tu a entrée 500\n";
  }
  return 0;
}