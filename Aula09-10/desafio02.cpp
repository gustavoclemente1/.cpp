//O algoritmo recebe 3 valores de provas de alunos e a média da turma e calcula se o aluno está abaixo, acima ou na média exata da turma.

#include <iostream>
#include <math.h>

using namespace std;

int main(){

float n1, n2, n3, cont=1, media_do_aluno, mediaT;

    while(cont <=3){
        cout << "Informe o valor da" << cont << "ª nota";

        if (cont==1){
            cin >> n1;
        } else if (cont==2){
            cin >> n2;
        } else{
            cin >> n3;
        }

        cont++;
    }    


    media_do_aluno=(n1+n2+n3)/3.0;

    cout << "Informe a média da turma" << endl;
    cin >> mediaT;

    if (media_do_aluno < mediaT){
        cout << "Aluno abaixo da média";
    } else if (media_do_aluno > mediaT){
        cout << "Aluno acima da média";
    } else{
        cout << "Aluno na média";
    }

    return 0;
}