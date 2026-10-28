#include <iostream>

using namespace std;

//Criação da classe "cidadesbrasil" onde ela fornece informações a população, fundação e idade(funções) de 3 cidades(objetos)
class cidadesbrasil{

    private:

        int populacao, fundacao, idade;

    public:

        cidadesbrasil(int p, int f, int id){
        populacao = p;
        fundacao = f;
        idade = id;
    }

        int getpopulacao(){

            return populacao;
        }

        int getfundacao(){

            return fundacao;
        }

        int getidade(){

            return idade;
        }

};

int main(){

    cidadesbrasil colatina(120033, 1921, 105);
    cout << "Colatina:\n";
    cout << "População: " << colatina.getpopulacao() << endl;
    cout << "Fundação: " << colatina.getfundacao() << endl;
    cout << "Idade: " << colatina.getidade() << endl;

    cidadesbrasil manaus(2303732, 1669, 357);
    cout << "Manaus:\n";
    cout << "Poulação: " << manaus.getpopulacao() << endl;
    cout << "Fundação: " << manaus.getfundacao() << endl;
    cout << "Idade: " << manaus.getidade() << endl;

    cidadesbrasil ouro_preto(74821, 1711, 315);
    cout << "Ouro Preto:\n";
    cout << "Poulaçao: " << ouro_preto.getpopulacao() << endl;
    cout << "Fundação: " << ouro_preto.getfundacao() << endl;
    cout << "Idade: " << ouro_preto.getidade() << endl;

    return 0;
}