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
#include "Random.hpp"


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
    double max = max_int + 1.0;
    double temp = reseed();
    if (temp < 0) temp = temp + max;
    return temp/max;
}

int_t Random::random_integer(int_t low, int_t high)
/*Post: A random integer between low and high (inclusive) isreturned.*/
{
    if (low > high)
        return random_integer(high, low);
    else
        return ((int_t)((high-low+1)*random_real())) + low;
}


int_t Random::poisson(double mean)
{
    double limit = exp(-mean);
    double product = random_real( );
    int_t count = 0;
    while (product > limit)
    {
        count++;
        product *= random_real( );
    }
    return count;
}

