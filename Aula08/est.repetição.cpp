#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Escolha um número:" << endl;
    cin >> numero;

    int soma=0;
    int cont=1;

    //while (cont <= numero){
    //    soma+=cont;
    //    cont++;
    //}
    
    //do{
      //  soma+=cont;
        //cont++;
    //} while (cont <= numero);

    for (int j=1 ; j<=numero; j+=1){
        soma+=j;
    }

    cout << "A soma dos números de 0 até o número escolhido é: " << soma;
    return 0;
}