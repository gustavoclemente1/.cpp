//Algoritmo que calcula se uma pessoa pode participar de um programa de moradia, de acordo com sua idade e renda.

#include <iostream>
using namespace std;

int main(){

int id;
float renda;

cout << "Qual a sua idade?\n";
cin >> id;
cout << "Qual a sua renda?\n";
cin >> renda;

if(id > 21 && renda < 1200){
    cout << "Aprovado";
} else{
    cout << "Reprovado";
}

    return 0;
}