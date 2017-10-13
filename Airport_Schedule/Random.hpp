//
//  Random.hpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef Random_hpp
#define Random_hpp


#define max_int INT16_MAX

typedef int16_t int_t;


class Random{
public:
    Random(bool pseudo = true);
    
    double random_real();
    
    int_t random_integer(int_t low, int_t high);
    
    int_t poisson(double mean);
    
private:
    int_t reseed()// Re-randomize the seed. int seed,
    {
        seed=seed*multiplier+add_on;
        return seed;
    }
    int_t seed,multiplier,add_on; // constants for use in arithmetic operations
    
};


#endif /* Random_hpp */
