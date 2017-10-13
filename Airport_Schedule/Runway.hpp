//
//  Runway.hpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef Runway_hpp
#define Runway_hpp
#include "Plane.hpp"
#include "Extended_Queue.hpp"


enum Runway_activity {idle, land, takeoff1};
class Runway{
public:
    Runway(int limit);
    Error_code can_land(const Plane &current);
    Error_code can_depart(const Plane &current);
    Runway_activity activity(int time, Plane &moving);
    void shut_down(int time) const;
    
private:
    Extended_Queue landing;
    Extended_Queue takeoff;
    int queue_limit;
    int num_land_requests; //number of planesasking to land
    int num_takeoff_requests; //number of planesasking to take off
    int num_landings; //number of planesthat have landed
    int num_takeoffs; //number of planesthat have taken off
    int num_land_accepted; //number of planesqueued to land
    int num_takeoff_accepted; //number of planesqueued to take off
    int num_land_refused; //number of landing planesrefused
    int num_takeoff_refused; //number of departing planes refused
    int land_wait; //total time of planeswaiting to land
    int takeoff_wait; //total time of planeswaiting to take off
    int idle_time; //total time runway isidle
};




#endif /* Runway_hpp */
