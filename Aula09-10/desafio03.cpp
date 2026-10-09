//Algoritmo que calcula o fatorial de um número escolhido pelo usuário.

#include <iostream>

using namespace std;

int main(){

int num,fat=1, cont=1;

cout << "Escolha um número" << endl;
cin >> num;

while(cont <= num){
    fat=fat*cont;

    cont++;
}

cout << "O fatorial de" << num << "é" << fat;

    return 0;
}