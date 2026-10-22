// O código tira a média da idade de duas pessoas apenas usando ponteiros com variáveis sem nome.
#include <iostream>

using namespace std;

int main(){
    int media;
    int* id1 = new int;
    int* id2 = new int;
    
    cout << "Informe a idade da primeira pessoa " << endl;
    cin >> *id1;
    cout << "Informe a idade da segunda pessoa\n";
    cin >> *id2;

    media = (*id1+*id2)/2;

    cout << "A média das idades é: " << media;  

    return 0;
}