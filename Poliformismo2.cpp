// Clases en C++

#include<iostream>
#include<stdlib.h>
using namespace std;

class Animal
{
private:
    string animal;
    string name;
public:
    Animal(string,string);
    ~Animal();

    virtual void mostrar();
};

Animal::Animal(string _animal,string _name)
{
    animal=_animal;
    name=_name;
}
Animal::~Animal()
{
}
void Animal::mostrar()
{   cout<<endl<<endl<<"ANIMAL "<<endl;
    cout<<"Es un: "<<animal<<endl;
    cout<<"El nombre es: "<<name<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////
class Humano:public Animal
{
private:
    string humano;
    string apellido;
public:
    Humano(string,string,string,string);
    ~Humano();

    void mostrar();
};

Humano::Humano(string _animal,string _name,string _humano,string _apellido):Animal(_animal,_name)
{
    humano=_humano;
    apellido=_apellido;
}
Humano::~Humano()
{
}
void Humano::mostrar()
{
    cout<<endl<<endl<<"HUMANO "<<endl;
    Animal::mostrar();
    cout<<"Es un humano: "<<humano<<endl;
    cout<<"Su apellido es: "<<apellido<<endl; 
}
/////////////////////////////////////////////////////////////////////////////////////
class Perro:public Animal
{
private:
    string raza;
    int peso;
public:
    Perro(string,string,string,int);
    ~Perro();

    void mostrar();
};

Perro::Perro(string _animal,string _name,string _raza,int _peso):Animal(_animal,_name)
{
    raza=_raza;
    peso=_peso;
}
Perro::~Perro()
{
}
void Perro::mostrar()
{
    cout<<endl<<endl<<"PERRO "<<endl;
    Animal::mostrar();
    cout<<"La raza es: "<<raza<<endl;
    cout<<"El peso es: "<<peso<<"Kg"<<endl; 
}


int main()
{
    Animal *vector[3];

    vector[0]= new Humano("Humano","Vincent","Humano","Mancera");
    vector[1]= new Humano("Humano","Fabricio","Humano","Hernández");
    vector[2]= new Perro("Perro","Manchas","Border",3);

    vector[0]->mostrar();
    vector[1]->mostrar();
    vector[2]->mostrar();

    //cin.get(); 
    delete vector[0]; 
    delete vector[1]; 
    delete vector[2]; 
    
    return 0;
}