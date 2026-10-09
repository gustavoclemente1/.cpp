#include <iostream>
#include <cmath>

using namespace std;

int main (){

float base, res;
int expo;

cout << "Informe a base" << endl;
cin >> base;

cout << "Informe o expoente" << endl;
cin >> expo;

res= pow(base,expo);
cout << "O resultado da potenciação é: " << res;

    return 0;
}