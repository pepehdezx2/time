//
//  Tiempo.h
//  tarea6
//
//  Created by Jose Antonio on 20/03/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Tiempo_h
#define Tiempo_h
#include <iostream>
using namespace std;

/*
 Implementa los funciones faltantes de la Clase Tiempo
 El valor de hora puede ser cualquier valor positivo
 El valor de minutos debe ser un valor entre 0 y 59
 Al realizar cualquier operaciÃ³n, el tiempo (hora y minutos) debe quedar con valores vÃ¡lidos
 */
class Tiempo {
public:
    Tiempo();
    Tiempo(int h, int m);
    Tiempo operator++();
    Tiempo operator+(int x);
    Tiempo operator+(Tiempo ti);
    bool operator>(Tiempo ti);
    friend Tiempo operator--(Tiempo ti);
    friend Tiempo operator+(int x, Tiempo ti);
    friend Tiempo operator+=(Tiempo &ti, Tiempo t);
    void setHora(int h);
    void setMinu(int m);
    int getHora();
    int getMinu();
    void muestra();
    
    // Miembro de la clase. operador ++ incrementa el Tiempo en 1 minuto y regresa el tiempo
    
    //Friend. operador -- decrementa el Tiempo en 1 minuto y regresa el tiempo
    // si la hora es 0:0 y se pide decrementar, regresa 0:0
    
    // Miembro de la clase. operador > Compara si el primer Tiempo es mayor que el segundo
    
    // Miembro de la clase. operador + Para sumar tiempo + minutos, regresa un tiempo como resultado
    
    // Friend. operador + Para sumar minutos + tiempo, regresa un tiempo como resultado
    
    // Miembro de la clase. operador + Suma t1 con t2 y regresa un tiempo con el resultado
    
    // Friend. operador += Suma t1 con t2 y deja el resultado en t1, no regresa nada
    
private:
    int hora;
    int minu;
};

Tiempo::Tiempo() {
    hora = 0;
    minu = 0;
}

Tiempo::Tiempo(int h, int m) {
    hora = h;
    minu = m;
}

Tiempo Tiempo::operator++(){
    Tiempo ti;
    ti.hora=this->hora;
    if (this->minu!=59){
        ti.minu=this->minu+1;
    }
    else{
        ti.hora+=1;
        ti.minu=0;
    }
    return ti;
}

Tiempo Tiempo::operator+(int x){
    Tiempo ti(hora, minu);
    int a, b;
    ti.minu=this->minu+x;
    a=ti.minu%60;
    b=ti.minu/60;
    ti.minu=a;
    ti.hora=this->hora+b;
    return ti;
}

Tiempo Tiempo::operator+(Tiempo ti){
    Tiempo t;
    int a, b;
    t.hora+=this->hora+ti.hora;
    t.minu+=this->minu+ti.minu;
    a=ti.minu/60;
    b=a*60;
    t.hora+=a;
    t.minu-=b;
    return t;
}

bool Tiempo::operator>(Tiempo ti){
    bool bit;
    if (ti.hora>this->hora){
        bit=0;
    }
    else
        if (ti.hora==this->hora){
            if (ti.minu>this->minu){
                bit=0;
            }
            else
                if (ti.minu<this->minu){
                    bit=1;
                }
        }
    else
        if (ti.hora<this->hora){
            bit=1;
        }
    return bit;
}

Tiempo operator--(Tiempo ti){
    Tiempo t;
    if (ti.hora!=0 && ti.minu!=0){
        t.hora=ti.hora;
        if (ti.minu==0){
            t.hora-=1;
            t.minu=59;
        }
        else{
            t.minu=ti.minu-1;
        }
    }
    else{
        t=ti;
    }
    return t;
}

Tiempo operator+(int x, Tiempo ti){
    int a, b;
    ti.minu+=x;
    a=ti.minu%60;
    b=ti.minu/60;
    ti.hora+=b;
    ti.minu=a;
    return ti;
}

Tiempo operator+=(Tiempo &ti, Tiempo t){
    int a, b;
    ti.hora+=t.hora;
    ti.minu+=t.minu;
    a=ti.minu/60;
    b=a*60;
    ti.hora+=a;
    ti.minu-=b;
    return ti;
}

void Tiempo::setHora(int h) {
    hora = h;
}

void Tiempo::setMinu(int m) {
    minu = m;
}

int Tiempo::getHora() {
    return hora;
}

int Tiempo::getMinu() {
    return minu;
}

void Tiempo::muestra() {
    cout <<hora<<":";
    if (minu<10)
        cout << "0" <<minu;
    else
        cout << minu;
}


#endif /* Tiempo_h */
