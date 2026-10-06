#include <iostream>

using namespace std;

int main(){

    int inteiro; //uma variável do tipo inteiro nomeada como "inteiro"
    inteiro = 5; //valor atribuido à variavel inteiro do tipo int
    cout << inteiro << endl;
    //se for declarado um valor decimal a uma variavel do tipo int e for solicitado para exibir, apenas o valor inteiro aparecerá.

    float real; //variável do tipo float para se representar números reais
    real = 5.2;
    cout << real << endl;

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    char letra; //a variável do tipo char suporta apenas 1 caractere com aspas símples.
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual a sua idade?\n";
    cin >> idade;
    cout << "Idade: " << idade;
    return 0;
}