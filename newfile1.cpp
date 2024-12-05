
    // Clases en C++

    #include<iostream>
    #include<stdlib.h>

    using namespace std;

    class Persona
    {
    private: // Atributos de la persona
        int edad;
        string nombre;

    public: // Metodos
        Persona(int,string); //Constructor
        void leer();
        void correr();
    };

    //Constructor para inicializar los atributos
    Persona::Persona(int _edad, string _nombre)
    {
        edad =_edad;
        nombre = _nombre;
    }

    void Persona::leer()
    {
        cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
    }

    void Persona::correr()
    {
        cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" años"<<endl;
    }

    int main()
    {
        Persona p1 = Persona(20,"Vincent F");
        Persona p2(19,"Fabricio M");

        p1.leer();
        p2.correr();

        system("pause");
        return 0;
    }