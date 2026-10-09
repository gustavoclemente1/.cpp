//O algoritmo resolve uma equação quando o usuário informa o valor de x.

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float x;
    float res;
    cout << "Informe o valor de x\n";
    cin >> x;

    res=(pow(x,2.0))-(3*x)+5;
    cout << "O resultado da equação é:" << res;
    
    return 0;
}