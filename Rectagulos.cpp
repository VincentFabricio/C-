    // Clases en C++

    #include<iostream>
    #include<stdlib.h>

    using namespace std;

    class Rectagulos
    {
    private:
        int largo;
        int ancho;
    public:
        Rectagulos(int,int);
        void perimetro();
        void area();
    };

    Rectagulos::Rectagulos(int _largo,int _ancho){
        largo=_largo;
        ancho=_ancho;
    }
    
    void Rectagulos::perimetro()
    {
        cout<<"Soy "<<largo<<" y estoy leyendo un libro"<<ancho<<" Holi"<<endl;
    }
    void Rectagulos::area()
    {
        cout<<"Soy "<<largo<<" y estoy leyendo un libro"<<ancho*largo<<" Holi"<<endl;
    }
    
    int main()
    {
        Rectagulos p1 = Rectagulos(20,20);
        Rectagulos p2(19,50);

        p1.perimetro();
        p2.area();

        system("pause");
        return 0;
    }
    