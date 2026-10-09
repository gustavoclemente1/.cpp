#include <iostream>
#include <cstddef> //Biblioteca onde se encontra a função NULL.

using namespace std;

int main(){
    int var1;
    int* pont1; //pont1 é um ponteiro que irá apontar para uma variável do tipo int.
    var1=5;
    pont1=&var1; //pont1 irá receber o ENDEREÇO de var1.
    cout << "Valor da variavel atraves do seu nome: " << var1 << endl;
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl; // irá imprimir o endereço do primeiro byte da variável.
    cout << "Valor que esta armazenado no endereco: " << *pont1 << endl; //exibe o valor que esta armazenado nesse endereço.
    cout << "Valor da variavel: " << pont1 << endl;

    int var2;
    var2= *pont1;  // É possível ATRIBUIR o valor de uma nova variável atraves de um ponteiro.  
    cout << "Valor de uma variável atribuida através de um ponteiro: " << var2 << endl;

    *pont1 = 30;
    cout << "Valor de uma variável modificada através de um ponteiro: " << var1 << endl;  //É possível MODIFICAR o valor de uma variável já existente por ponteiros.

    var2=50;
    pont1= &var2;  // É possivel alterar o ENDEREÇO de um ponteiro apontando ele para uma nova variável.
    cout << "Novo valor do ponteiro apontado para a o endereço da variável var2: " << *pont1 << endl;
    

    int* pont2;
    pont2=NULL;  //Função da biblioteca <cstddef> utilizada para que não haja vazamento de memória.
    cout << "Valor nulo da memória ao utilizar a função NULL para que não ocorra vazamento de memória: " << pont2 << endl;  //Caso o ponteiro não seja atribuido a uma variável com algum valor, o espaço na memória é desperdiçado.

    int* pont3 = new int;  //É possível atribuir um ponteiro a uma variável sem nome.
    *pont3 = 35;  //É possível atribuir um valor a esse ponteiro. CUIDADO, se o Endereço desse ponteiro for realocado, aquele espaço na memória é perdido pois a variável não possui nome.
    cout << "Endereço da memória do ponteiro pont3: " << pont3 << endl;
    cout << "Valor de um ponteiro atribuído a uma variável sem nome: " << *pont3 << endl;
    delete pont3; //Se usa o comando DELETE para deletar um endereço de memória que um ponteiro aloca sem uma variável com nome para que não haja vazamento de memória. 
    cout << pont3 << endl;
    pont3 = pont1;
    cout << "Novo valor do ponteiro 3 ao ser apontado para o ponteiro 1: " << *pont3 << endl;
    cout << "Novo endereço do ponteiro 3 apontado para o ponteiro 1: " << pont3 << endl;
    
    return 0;
}