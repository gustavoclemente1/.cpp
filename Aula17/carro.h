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