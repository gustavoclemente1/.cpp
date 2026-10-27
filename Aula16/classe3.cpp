#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:

    //Construtor é um método especial de uma classe utilizado para inicializar novos objetos sem a necessidade de atribuir valores individuais com o set.
    carro(int a, float v, float k);
        
    // get retorna o valor em uma função
    // set define o valor em uma função
    void setano(int a);

    int getano();

    void setvalor(float v);

    float getvalor();

    void setkm(float k);

    float getkm();
};

int main(){

    carro celta(2000, 120000, 95000);
    //celta.setano(2000);
    //celta.setvalor(12000);
    //celta.setkm(95000);
    cout << "Celta:\n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: " << celta.getkm() << endl;


    carro palio(1995, 10000, 150000);
    //palio.setano(1995);
    //palio.setvalor(10000);
    //palio.setkm(150000);
    cout << "Palio:\n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;


    return 0;
}



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