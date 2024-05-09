#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    string game[5] = {"RPG","Adventure","Combat","Exploration","Strategy"};
    for (int i = 0; i <= 4;i ++)
    {
            cout << "Genre:" << game[i];
    }
    return 0;
}