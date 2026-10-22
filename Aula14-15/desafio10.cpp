
//Troca o valor de referência entre dois ponteiros através de uma função.
#include <iostream>

using namespace std;

int troca(int* &valor1, int* &valor2){
    int aux;

    aux = *valor1;
    *valor1 = *valor2;
    *valor2 = aux;

}

int main(){
    
    int var1=5, var2=10;
    int* pont1;
    int* pont2;

    pont1 =& var1;
    pont2 =& var2;

    cout << "Valor de referência antes da troca do pont1: " << &pont1 << endl;
    cout << "Valor de endereço da memória da variável apontada: " << pont1 << endl;
    cout << "Valor alocado no endereço de memória apontado pelo pont1 :" << *pont1 << endl;
    cout << "Valor de referência antes da troca do pont2: " << &pont2 << endl;
    cout << "Valor de endereço da memória da variável apontada: " << pont2 << endl;
    cout << "Valor alocado no endereço de memória apontado pelo pont2: "<< *pont2 << endl;

    troca(pont1, pont2);

    cout << "Valor final de *pont1: " << *pont1 << endl;
    cout << "valor final de *pont2: " << *pont2 << endl;


    return 0;
}