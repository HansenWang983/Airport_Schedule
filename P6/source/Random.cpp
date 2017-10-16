//
//  Random.cpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#include <cmath>
#include <iostream>
#include <time.h>
#include <limits.h>
#include "../include/Random.hpp"


using namespace std;

Random::Random(bool pseudo)
{
    if(pseudo) seed = 1;
    else seed = time(NULL) % max_int ;
    multiplier = 2743;
    add_on = 5923;
}

double Random::random_real()
/*Post: A random real number between 0 and 1 isreturned.*/
{
    cerr << "\nSupply a random real (between 0 and 1): " << flush; 
    double temp; 
    cin >> temp; 
    return temp; 
}

int_t Random::random_integer(int_t low, int_t high)
/*Post: A random integer between low and high (inclusive) isreturned.*/
{
    if (low > high)
        return random_integer(high, low);
    cerr << "\nSupply a random integer (between " << low << " and " << high <<"): " << flush; 
    int temp; 
    cin >> temp; 
    return temp;
}


int_t Random::poisson(double mean)
{
    cerr << "\nSupply a random integer (around " << mean << "): " << flush; 
    int temp; 
    cin >> temp; 
    return temp;
}

