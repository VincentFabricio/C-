    // Clases en C++

    #include<iostream>
    #include<stdlib.h>
    using namespace std;

    class Punto
    {
    private:
        int x,y;
    public:
        Punto();
        ~Punto();

        void setPunto(int,int);
        int getPuntoX();
        int getPuntoY();
    };
    Punto::Punto()
    {

    }
    Punto::Punto(/* args */)
    {
    }
    Punto::~Punto()
    {
    }
    // Establecer valores a los atributos - SETTERS
    void Punto::setPunto(int _x,int _y)
    {
        x=_x;
        y=_y;
    }

    int Punto::getPuntoX()
    {
        return x;
    }
    int Punto::getPuntoY()
    {
        return y;
    }

    int main()
    {
        Punto p1;

        p1.setPunto(15,10);

        cout<<p1.getPuntoX()<<endl;
        cout<<p1.getPuntoY()<<endl;



        system("pause");
        return 0;
    }