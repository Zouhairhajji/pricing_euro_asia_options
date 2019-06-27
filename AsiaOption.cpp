/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AsiaOption.cpp
 * Author: zouhairhajji
 * 
 * Created on 27 juin 2019, 11:24
 */

#include "AsiaOption.h"
#include "CalculOption.h"
#include <cmath>

AsiaOption::AsiaOption() {
    this->calculOption = CalculOption();
}

double AsiaOption::price(double _X0, double k, double sigma, int N, int T, double r, double D, int M) {
    double v = r - D - ((sigma * sigma) / 2);
    double dt = (double) T / N;

    double X[M][N];
    double S[M];

    // initialize the first elements with init price
    for (int i = 0; i < M; i++)
        X[i][0] = log(_X0);

    /* Pricing d'une option asiatique */
    for (int m = 0; m < M; m++) {
        for (int t = 0; t < N; t++) {
            S[m] += X[m][t];
        }
        S[m] = S[m] / N;
        S[m] = exp(S[m]);
    }


    double espGain = 0.0;
    for (int m = 0; m < M; m++)
        espGain += this->calculOption.calculate_gain(S[m], k);
    //Calcul du prix
    return exp(-r * T) * espGain / M;

}



