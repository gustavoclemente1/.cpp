#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:
    
    //Construtor é um método especial de uma classe utilizado para inicializar novos objetos sem a necessidade de atribuir valores individuais com o set.
    carro(int a=0, float v=-1, float k=-1){  //Os valores iniciais permanecerão caso não haja nenhum valor de entrada no construtor.
        ano = a;
        valor = v;
        km = k;
    }  
        
    // get retorna o valor em uma função
    // set define o valor em uma função
    void setano(int a){
        ano = a;  //Em caso de variáveis com nomes iguais, o "this->" serve para referenciar a variável da classe fazendo a distinção entre as duas.
    }

    int getano(){
        return ano;
    }

    void setvalor(float v){
        valor = v;
    }

    float getvalor(){
        return valor;
    }

    void setkm(float k){
        km = k;
    }

    float getkm(){
        return km;
    }
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
