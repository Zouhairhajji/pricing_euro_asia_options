/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EuropeanOption.h
 * Author: zouhairhajji
 *
 * Created on 27 juin 2019, 10:15
 */

#ifndef EUROPEANOPTION_H
#define EUROPEANOPTION_H

#include "CalculOption.h"


class EuropeanOption {
public:
    EuropeanOption();
    double price(double _X0, double k, double sigma, int N, int T, double r, double D, int M) ;

    
protected:
    CalculOption calculOption;
};

#endif /* EUROPEANOPTION_H */

