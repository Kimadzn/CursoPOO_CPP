#include "complexo.h"
#include <iostream>

using namespace std;

    Complexo::Complexo(float r, float i){

        re = r; 
        im = i;

    }
    
    

    void Complexo::print(){
        cout<< re << "+ (" << im << ")i";
    }
/*     Complexo Complexo::add(Complexo& par){
        float x = this -> re + par.re;
        float y = this -> im + par.im;
        return Complexo{x,y};

    }
    Complexo Complexo::sub(Complexo& par){
        float x = this -> re - par.re;
        float y = this -> im - par.im;
        return Complexo{x,y};

    } */
//Sobrecarga de operadores!

    Complexo Complexo::operator+(Complexo& par){
        float x = this -> re + par.re;
        float y = this -> im + par.im;
        return Complexo{x,y};
    }
    Complexo Complexo::operator-(Complexo& par){
        float x = this -> re - par.re;
        float y = this -> im - par.im;
        return Complexo{x,y};

    }
