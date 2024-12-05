    // Clases en C++

    #include<iostream>
    #include<stdlib.h>
    using namespace std;

    class Perro
    {
    private:
        string nombre,raza;
    public:
        Perro(string,string);
        ~Perro();
        void mostrardatos();
        void jugar();
    };
    
    Perro::Perro(string _nombre,string _raza)
    {
        nombre=_nombre;
        raza=_raza;
    }
    Perro::~Perro(){}
    
    void Perro::mostrardatos()
    {
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Raza: "<<raza<<endl;
    }
    void Perro::jugar()
    {
        cout<<"El perro "<<nombre<<" esta juganto"<<endl;
    }

    int main()
    {
        Perro p1("Fido","Doberman");

        p1.mostrardatos();
        p1.jugar();
        p1.~Perro();

        system("pause");
        return 0;
    }
    