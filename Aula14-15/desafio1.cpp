//O código recebe valores e parametros do usuário para a soma de duas matrizes de dimensões iguais.
#include <iostream>

using namespace std;

int main(){

    int i, j, l, c;
    cout << "Informe as dimensões da matriz" << endl;
    cout << "Número de linhas: ";
    cin >> l;
    cout << "Número de colunas: ";
    cin >> c;


    for(i=0; i < l; i++){
        for(j=0; j < c; c++){
            cout << "Informe o valor da linha" << i+1 <<", coluna" << j+1;
            cin >> *matriz[i][j];
        }
    }

    return 0;
}