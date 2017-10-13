//
//  Plane.cpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#include "Plane.hpp"
#include <iostream>
using namespace std;

Plane::Plane(int flt, int time, Plane_status status)
/*Post: The Plane data members flt_num, clock_start, and state are set to the values of the parametersflt, time and status respectively.*/
{
    flt_num = flt;
    clock_start = time;
    state = status;
    cout << "Plane number " << flt << " ready to ";
    if(status== arriving)
        cout << "land."<<endl;
    else
        cout <<"take off."<<endl;
}
    
Plane::Plane()
/*Post: The Plane data membersflt_num, clock_start, state are set to illegal de-
fault values.*/
{
    flt_num = -1;
    clock_start = -1;
    state = null;
}

void Plane::refuse() const
/*Post: Processesa Plane wanting to use Runway, when the Queue isfull.*/
{
    cout << "Plane number " << flt_num;
    if (state == arriving)
        cout<<"directed to another airport"<<endl;
    else
        cout <<"told to try to takeoff again later"<<endl;
}

void Plane::land(int time) const
/*Post: Processesa Plane that islanding at the specified time.*/
{
    int wait = time - clock_start;
    cout <<time<<":Plane number"<<flt_num<<"landed after"
    <<wait<<"timeunit"<<((wait == 1)?"":"s") <<"in the takeoff queue."<<endl;
}

void Plane::fly(int time) const
/*Post: Processa Plane that istaking off at the specified time.*/
{
    int wait = time - clock_start;
    cout <<time<<":Plane number"<<flt_num<<"took off after"
    <<wait<<"timeunit"<<((wait == 1)?"":"s") <<"in the takeoff queue."<<endl;
}
    
int Plane::started() const
/*Post: Return the time that the Plane entered the airportsystem.*/ {
    return clock_start;
}
  
    
