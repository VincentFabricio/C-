    // Clases en C++

    #include<iostream>
    #include<stdlib.h>
    using namespace std;

    class Fecha
    {
    private:
        int dia, mes, anio;
    public:
        Fecha(int,int,int);
        Fecha(long);
        void mostrarfecha();
    };
    
    Fecha::Fecha(int _dia,int _mes,int _anio)
    {
        dia=_dia;
        mes=_mes;
        anio=_anio;
    }
    Fecha::Fecha(long fecha)
    {
        anio=int(fecha/10000); //extraer año
        mes=int((fecha-anio*10000)/100); //Extraer mes
        dia=int(fecha-anio*10000-mes*100); //Extraer día
    }
    
    
    void Fecha::mostrarfecha()
    {
        cout<<"La fecha es: "<<dia<<"/"<<"/"<<mes<<"/"<<anio<<" "<<endl;
    }

    int main()
    {
        Fecha hoy(9,1,2017);
        Fecha ayer(20170108);

        hoy.mostrarfecha();
        ayer.mostrarfecha();

        system("pause");
        return 0;
    }
    