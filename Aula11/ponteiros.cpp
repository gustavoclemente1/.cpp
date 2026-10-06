#include <iostream>

using namespace std;

int main(){
    int var1;
    int* pont1; //pont1 é um ponteiro que irá apontar para uma variável do tipo int.
    var1=5;
    pont1=&var1; //pont1 irá receber o ENDEREÇO de var1.
    cout << "Valor da variavel atraves do seu nome: " << var1 << endl;
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl; // irá imprimir o endereço do primeiro byte que compoe o valor da variável.
    cout << "Valor que esta armazenado no endereco: " << *pont1 << endl; //exibe o valor que esta armazenado nesse endereço.
    cout << "Valor da variavel: " << pont1;
    int var2;
    
    return 0;
}