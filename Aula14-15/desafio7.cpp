//O código recebe valores e parametros do usuário para a soma de duas matrizes de dimensões iguais.
#include <iostream>

using namespace std;

int main(){

    int i, j, l, c, matriz[5][5], soma=0;
    cout << "Informe as dimensões da matriz" << endl;
    cout << "Número de linhas: ";
    cin >> l;
    cout << "Número de colunas: ";
    cin >> c;


    if(l < 1 || l > 5 || c < 1 || l > 5){
        cout << "Dimensões Inválidas!" << endl;
    }

    for(i=0; i < l; i++){
        for(j=0; j < c; j++){
            cout << "Informe o valor da linha" << i+1 <<", coluna" << j+1 << endl;
            cin >> matriz[i][j];
            soma += matriz[i][j];
        }
    }

    cout << "Informe os valores da segunda matriz" << endl;

    for(i=0; i < l; i++){
        for(j=0; j < c; j++){
            cout << "Informe o valor da linha" << i+1 <<", coluna" << j+1 << endl;
            cin >> matriz[i][j];
            soma += matriz[i][j];
        }
    }

    cout << "A soma dos valores das matrizes é de: " << soma;
    return 0;
}