//Algoritmo que calcula a potenciação com 2 valores escolhidos pelo usuário.

#include <iostream>


using namespace std;


float potencia(float x, int y){
    int cont=1;
    float resL=1;

    while(cont <= y){
        resL*=x;
        cont++;
    }

    return resL;
}


int main (){

float base;
int expo, escolha;

while(1){
cout << "Informe a base" << endl;
cin >> base;

cout << "Informe o expoente" << endl;
cin >> expo;

float res= potencia(base, expo);
cout << "O resultado da potenciação é: " << res << endl;

cout << "Digite 1 para calcular novamente e 0 para encerrar.\n";
cin >> escolha;
    if(escolha == 0){
        break;
    }
}
    return 0;
}