#include <iostream>
#include <math.h> //Biblioteca para funções matemáticas.

using namespace std;

int main() {
    int a=5, b=2;
    cout << "Soma: " << a+b << endl;
    

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;
    

    int mult=a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv=a/b; //Divisão inteira
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv=a%b;   //Resto da divisão
    cout << "Resto da divisao: " << restodiv << endl;

    float div=(float)a / (float)b;
    cout << "Divisao real: " << div << endl;

    float pot= pow(a,b); // Função da biblioteca math.h para a utilização de potência.
    cout << "Potencia: " << pot << endl;

    // Incremento e Decremento
    //a = a+1
    //a+=1  Essa forma é mais interessante, pois se pode acrescentar mais do que o valor 1
    //a++

    //a = a-1
    //a-=1
    //a--

    //a*=2 a receberá o valor dele multiplicado por 2

    return 0;
}
