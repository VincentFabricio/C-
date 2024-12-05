// Clases en C++

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona
{
protected:
    string nombre;
    int edad;
public:
    Persona(string,int);
    ~Persona();

    Persona();

    void mostrarPersona();
};

class Alumno:public Persona
{
private:
    string codigoAlumno;
    float notaFinal;
public:
    Alumno(string,int,string,float);
    ~Alumno();

    void mostrarAlumno();
};

Alumno::Alumno(string _nombre,int _edad,string _codigoAlum,float _notaFinal):Persona(_nombre,_edad)
{
    codigoAlumno=_codigoAlum;
    notaFinal=_notaFinal;
}
Alumno::~Alumno()
{
}

void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout<<"Código del estudiante: "<<codigoAlumno<<endl;
    cout<<"Nota final del estudiante: "<<notaFinal<<endl;
}



Persona::Persona(string _nombre, int _edad)
{
    nombre=_nombre;
    edad=_edad;
}
Persona::~Persona()
{
}

void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

int main()
{
    Alumno A1("Vincent",34,"1234",5);

    A1.mostrarAlumno();
    system("pause");
    return 0;
}