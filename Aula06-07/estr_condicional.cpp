#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informa a nota 1\n";
    cin >> nota1;
    cout << "Informa a nota 2\n";
    cin >> nota2;
    float media=(nota1+nota2)/2;
    cout << "Media: " << media << endl;

    //if (media >=5){
    //    cout << "Aluno Aprovado\n";
    //}

    if (media < 2.5){
        cout << "Nota Final : D \n";
    } else if (media < 5){
        cout << "Nota Final: C\n";
    } else if (media < 7.5){
        cout << "Nota Final: B\n";
    } else{
        cout << "Nota Final: A\n";
    }


    //Operadores lógicos: E= &&, OU= ||, Não: !

    float freq;
    cout << "Qual é a frequencia do aluno?\n";
    cin >> freq;

    //if(media >=5 && freq >=75){
      //  cout << "Aluno Aprovado!\n";
    //}else
      //  cout << "Aluno Reprovado!\n";
    
    if (media <5 || freq <75){
        cout << "Aluno Reprovado\n";
    } else{
        cout << "Aluno Aprovado\n";
    }
    
    return 0;
}