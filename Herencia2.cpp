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

    Persona();

    void mostrarPersona();
};
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
    cout<<"MUESTRA LA PERSONA"<<endl<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
///////////////////////////////////////////////////////////////////
class Empleado:public Persona
{
private:
    string codigoEmpleado;
    float notaFinal;
public:
    Empleado(string,int,string,float);
    ~Empleado();

    void mostrarEmpleado();
};

Empleado::Empleado(string _nombre,int _edad,string _codigoAlum,float _notaFinal):Persona(_nombre,_edad)
{
    codigoEmpleado=_codigoAlum;
    notaFinal=_notaFinal;
}
Empleado::~Empleado()
{
}
void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout<<endl<<endl<<"MUESTRA EL EMPLEADO"<<endl<<endl;
    cout<<"Código del estudiante: "<<codigoEmpleado<<endl;
    cout<<"Nota final del estudiante: "<<notaFinal<<endl<<endl<<endl;
}
///////////////////////////////////////////////////////////////////
class Estudiante:public Persona
{
private:
    string colegio;
    int ID;
public:
    Estudiante(string,int,string,int);
    ~Estudiante();

    void mostrarEstudiante();
};

Estudiante::Estudiante(string _nombre,int _edad,string _colegio,int _ID):Persona(_nombre,_edad)
{
    colegio=_colegio;
    ID=_ID;
}
Estudiante::~Estudiante()
{
}
void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout<<endl<<endl<<"MUESTRA EL ESTUDIANTE"<<endl<<endl;
    cout<<"Código del estudiante: "<<colegio<<endl;
    cout<<"Nota final del estudiante: "<<ID<<endl<<endl<<endl;

}
///////////////////////////////////////////////////////////////////
class Universitarios:public Estudiante
{
private:
    string universidad;
    int promedio;
public:
    Universitarios(string,int,string,int,string,int);
    ~Universitarios();

    void mostrarUniversitario();
};

Universitarios::Universitarios(string _nombre,int _edad,string _colegio,int _ID,string _universidad,int _promedio):Estudiante(_nombre,_edad,_colegio,_ID)
{
    universidad=_universidad;
    promedio=_promedio;
}
Universitarios::~Universitarios()
{
}

void Universitarios::mostrarUniversitario()
{
    mostrarEstudiante();
    cout<<endl<<endl<<"MUESTRA EL UNIVERSITARIO"<<endl<<endl;
    cout<<"Mostrar nombre de la Universidad: "<<universidad<<endl;
    cout<<"Mostrar promedio: "<<promedio<<endl<<endl<<endl;
}


int main()
{
    Persona A0("Fabricio",34);
    A0.mostrarPersona();
    

    Empleado A1("Vincent",34,"1234",5);
    A1.mostrarEmpleado();
    

    Estudiante A2("Vincent F",34,"1234",5);
    A2.mostrarEstudiante();

    Universitarios A3("VIncent M",34,"12345",5,"SanBuena",4);
    A3.mostrarUniversitario();

    A0.~Persona();
    A1.~Empleado();
    A2.~Estudiante();
    A3.~Universitarios();



    system("pause");
    return 0;
}