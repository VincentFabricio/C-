// Clases en C++

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona(string,int);
    ~Persona();

    virtual void mostrar(); 
};

Persona::Persona(string _nombre,int _edad)
{
    nombre=_nombre;
    edad=_edad;
}
Persona::~Persona()
{
}
void Persona::mostrar()
{
    cout<<"Nombre de la persona es: "<<nombre<<endl;
    cout<<"Edad de la persona es: "<<edad<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////
class Alumno:public Persona
{
private:
    float notaFinal;
    string colegio;
public:
    Alumno(string,int,float,string);
    ~Alumno();

    void mostrar();
};

Alumno::Alumno(string _nombre,int _edad,float _notaFinal,string _colegio):Persona(_nombre,_edad)
{
    notaFinal=_notaFinal;
    colegio=_colegio;
}
Alumno::~Alumno()
{
}
void Alumno::mostrar()
{
    cout<<endl<<endl<<"ALUMNO "<<endl;
    Persona::mostrar();
    cout<<"Nota final de la persona es: "<<notaFinal<<endl;
    cout<<"Nombre del colegio de la persona es: "<<colegio<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////
class Profesor:public Persona
{
private:
    string materia;
    string universidad;
public:
    Profesor(string,int,string,string);
    ~Profesor();

    void mostrar();
};

Profesor::Profesor(string _nombre,int _edad,string _materia,string _universidad):Persona(_nombre,_edad)
{
    materia=_materia;
    universidad=_universidad;
}

Profesor::~Profesor()
{
}
void Profesor::mostrar()
{
    cout<<endl<<endl<<"PROFESOR "<<endl;
    Persona::mostrar();
    cout<<"Nombre de la materia de la persona es: "<<materia<<endl;
    cout<<"Nombre de la Universidad de la persona es: "<<universidad<<endl;
}



int main()
{
    Persona *vector[3];

    vector[0]= new Alumno("Vincent",32,4.1,"NAS");
    vector[1]= new Alumno("Fabricio",32,4.1,"CEES");
    vector[2]= new Profesor("Fabricio",32,"Robótica","San Buena");

    vector[0]->mostrar();
    vector[1]->mostrar();
    vector[2]->mostrar();

    system("pause");
    return 0;
}