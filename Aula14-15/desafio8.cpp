#include <iostream>

using namespace std;

int main(){

int tamanho, c, res=1;

    while(res == 1){
        cout << "Informe o tamanho do vetor.\n";
        cin >> tamanho;

        int* vetor = new int[tamanho];

            for(c=0; c < tamanho; c++){
                cout << "Informe o" << c+1 << " º valor do vetor.";
                cin >> vetor[c];   
            }

            for(c=0;c < tamanho; c++){
                cout << vetor[c] << " ";
            }

            delete[] vetor;
        
    cout << endl;
    cout << "Gostaria de um novo vetor? Sim(1) Não(0)" << endl;
    cin >> res;
        if(res == 0){
            break;
        }
    }
    return 0;
}