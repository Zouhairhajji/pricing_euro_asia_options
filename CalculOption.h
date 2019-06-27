/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculOption.h
 * Author: zouhairhajji
 *
 * Created on 27 juin 2019, 08:47
 */

#ifndef CALCULOPTION_H
#define CALCULOPTION_H

class CalculOption {
public:
    CalculOption();


    double generate_rnd_normal();
    double calculate_gain(double s, double k);
    
    
    int _tmain(int argc, char* argv[]) ;
private:

};

#endif /* CALCULOPTION_H */

