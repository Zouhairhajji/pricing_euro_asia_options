/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zouhairhajji
 *
 * Created on 24 juin 2019, 19:11
 */

#include <cstdlib>
#include <chrono>
#include <stdio.h>
#include <cmath>
#include <iostream>

#include "CalculOption.h"
#include "EuropeanOption.h"
#include "AsiaOption.h"







using namespace std;

/*
 *  v -> 
        r -> rendement 
        D -> dividende en %
        sigma -> volatilité 
        dt -> nbr d'iteration 
        k -> strike (le prix à la fin du T)
        St -> prix du sous jacent à l'instance T
        M -> le nombre de somulation
 */
int main(int argc, char** argv) {

    



    double X0 = 100; // prix initial
    double N = 254; // nombre de jours
    double K = 102; // le strike, date à l'instant T
    double sigma = 2.5 / 100; // volatilité / risque
    double M = 10; // nombre de trajectoire
    double r = 0.2; // le rendement espere
    double D = 0.05; // dividence 
    int T = 1; //nbr of times

    EuropeanOption euroOption = EuropeanOption();
    double euroPricing = euroOption.price(X0, K, sigma, N, T, r, D, M);
    
    

    AsiaOption asiaOption = AsiaOption();
    double asiaPricing = asiaOption.price(X0, K, sigma, N, T, r, D, M);
    
    
    cout << "Prix de l'option européenne: " << euroPricing << endl;
    cout << "Prix de l'option asiatique: " << asiaPricing << endl;
    
    return 0; 
}

