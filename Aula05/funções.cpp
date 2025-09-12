#include <iostream>

using namespace std;

#define pi 3.14; //Define uma variável para um valor constante.
#define curtir cout << "Curta esse video!\n";

//void é usado quando não se retorna nenhum valor de uma função
void inscrever() {
    cout << "Se increva no Canal do\nProfessor Douglas Malioli!\n";
}

int somar(int x, int y){
    int soma;
    soma=x+y;
    return soma;
}

int main(){

    inscrever();
     
    int a=5, b=4 ,s;
    s = somar(a,b);
    cout << "Soma: " << s << endl;
    cout << pi;
    curtir;

    return 0;
}