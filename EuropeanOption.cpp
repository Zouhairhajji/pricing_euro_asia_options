/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EuropeanOption.cpp
 * Author: zouhairhajji
 * 
 * Created on 27 juin 2019, 10:15
 */

#include "EuropeanOption.h"
#include "cmath"

EuropeanOption::EuropeanOption() {
    this->calculOption = CalculOption();
}

double EuropeanOption::price(double _X0, double k, double sigma, int N, int T, double r, double D, int M) {
    double v = r - D - ((sigma * sigma) / 2);
    double dt = (double) T / N;

    double X[M][N];
    double S[M];


    // initialize the first elements with init price
    for (int i = 0; i < M; i++)
        X[i][0] = log(_X0);


    // define all prices for every path
    for (int m = 0; m < M; m++) {
        for (int t = 1; t < N; t++) {
            double eps = this->calculOption.generate_rnd_normal();
            double previous_price = X[m][t - 1];

            X[m][t] = (previous_price + (v * dt) + (sigma * eps * sqrt(dt)));
        }

        S[m] = exp(X[m][N - 1]);
    }

    double espGain = 0.0;
    for (int m = 0; m < M; m++)
        espGain += this->calculOption.calculate_gain(S[m], k);


    return exp(-r * T) * espGain / M;
}




