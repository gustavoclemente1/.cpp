//O algoritmo resolve uma equação quando o usuário informa o valor de x.

#include <iostream>
#include <cmath>

using namespace std;


float f(float x){

    float valor;
    valor=(x*x)-(3*x)+5;
    return valor;

}


int main(){

    float a;
    cout << "Informe o valor de x\n";
    cin >> a;
    float res=f(a);
    cout << "O valor da função no ponto " << a << "é igual a " << res;
    
    return 0;
}