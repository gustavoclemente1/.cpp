#include <iostream>

using namespace std;

int main(){

    //Alocação Estática: Tamanho do vetor já é pré definido na compilação

    //int vet[4];
    //vet[0] = 1;
    //vet[1] = 10;

    int vet[4] = {5,10}; //quando um vetor é declarado dessa forma, todos os espaços não alocados serão 0

    for (int i=0; i<4; i++){
        cout << vet[i] << " ";
    }

    cout << endl;

    //Função sizeof: indica o valor de 1 inteiro e o valor de um vetor em bytes.
    //Cada inteiro equivale a 4 bytes

    int x = sizeof(vet)/sizeof(int); //Tamanho do vetor dividido pelo tamanho de 1 inteiro em bytes.
    int y = sizeof(int);
    cout << "Tamanho de inteiro: " << y << endl;
    cout << "Tamanho de elementos do vetor: " << x << endl;


    //Alocação Dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;

    int* vetor = new int [tamanho]; //Permite que o tamanho do vetor seja definido durante a execução, depois que o usuário informa o valor. new[] permite que a memória seja liberada com "delete, quando não for mais necessária."

    for(int i=0; i<tamanho; i++){
    cout << "Digite o valor numero " << i+1 << " do vetor." << endl;
    cin >> vetor[i];
    }

    for(int i=0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }

    delete [] vetor;
    return 0;
}