#include <iostream> 
#include "carro.h" //Todas as bibliotecas e classes criadas se coloca aspas duplas para incluir

using namespace std;

//Construtor é um método especial de uma classe utilizado para inicializar novos objetos sem a necessidade de atribuir valores individuais com o set.
    carro::carro(int a=0, float v=-1, float k=-1){  //Os valores iniciais permanecerão caso não haja nenhum valor de entrada no construtor.
        ano = a;
        valor = v;
        km = k;
    }  
        
    // get retorna o valor em uma função
    // set define o valor em uma função
    void carro::setano(int a){
        ano = a;  //Em caso de variáveis com nomes iguais, o "this->" serve para referenciar a variável da classe fazendo a distinção entre as duas.
    }

    int carro::getano(){
        return ano;
    }

    void carro::setvalor(float v){
        valor = v;
    }

    float carro::getvalor(){
        return valor;
    }

    void carro::setkm(float k){
        km = k;
    }

    float carro::getkm(){
        return km;
    }