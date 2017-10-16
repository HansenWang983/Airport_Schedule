//
//  Plane.hpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef Plane_hpp
#define Plane_hpp

enum Plane_status {null, arriving, departing};
class Plane{
public:
    Plane();
    
    Plane(int flt, int time, Plane_status status);
    void refuse() const;
    void land(int time) const;
    void fly(int time) const;
    int started() const;
    
private:
    int flt_num;
    int clock_start;
    Plane_status state;
};

#endif /* Plane_hpp */
