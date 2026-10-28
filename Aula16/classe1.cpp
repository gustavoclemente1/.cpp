#include <iostream>

using namespace std;


class propaganda{
    private:  //Tudo o que estiver em privado (funções, variáveis etc) só é possível acessar dentro da própria classe.

    public:   //Podemos acessar tudo o que estiver público fora da classe em questão.

    void inscrever(){
        cout << "Se inscreva no canal do professor Douglas Maioli!\n";
    }

    void curta(){
        cout << "Curta esse vídeo e ative o sininho!\n";
    }

};

int main(){
    propaganda canal; //Criação do objeto canal da classe propaganda.
    canal.inscrever(); //Chamada da função "inscrever" contida no objeto canal.
    canal.curta();  //Chamada da função "inscrever" contida no objeto canal.
    


    return 0;
}