//Algoritmo que calcula o fatorial de um número escolhido pelo usuário.

#include <iostream>

using namespace std;

int fatorial(int n){

    int cont=1, fat=1;

    while(cont <= n){
    fat*=cont;
    cont++;
    }

    return fat;
}


int main(){

int num;

    while (true){
    cout << "Escolha um número" << endl;
    cin >> num;
    if(num <= 0){
        cout << "Número inválido\n";
    }else{
        break;
    }
}


int res=fatorial(num);

cout << "O fatorial de " << num << "é " << res;

    return 0;
}