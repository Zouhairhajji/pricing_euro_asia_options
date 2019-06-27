/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculOption.cpp
 * Author: zouhairhajji
 * 
 * Created on 27 juin 2019, 08:47
 */

#include "CalculOption.h"




#include <ctime>
#include <cmath>
#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

using namespace std;

CalculOption::CalculOption() {
}


/**
 * 
 * la méthode permet de convertir des var de discret -> normal 
 *  avec la methode de box-muller
 * 
 * @return random normal double
 */
double CalculOption::generate_rnd_normal() {
    double ro = (rand() / (double) RAND_MAX);
    double phi = (rand() / (double) RAND_MAX);
    return sqrt(-2 * log(ro)) * cos(2 * PI * phi);
}

/**
 * la methode permet de calculer le gain
 * 
 * max (0, ST – K)
 * 
 * @param s 
 * @param k
 * @return max (0, ST – K)
 */
double CalculOption::calculate_gain(double st, double k) {  
    return  (st - k > 0) ? (st - k) : 0;
}

