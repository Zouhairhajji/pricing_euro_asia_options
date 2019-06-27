/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AsiaOption.h
 * Author: zouhairhajji
 *
 * Created on 27 juin 2019, 11:24
 */

#ifndef ASIAOPTION_H
#define ASIAOPTION_H

#include "CalculOption.h"

class AsiaOption {
    
public:
    AsiaOption();
    double price(double _X0, double k, double sigma, int N, int T, double r, double D, int M);


protected:
    CalculOption calculOption;
};

#endif /* ASIAOPTION_H */

