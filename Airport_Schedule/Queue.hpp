//
//  Queue.hpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp
#include "Plane.hpp"

enum Error_code{success, fail, range_error, underflow, overflow, fatal, not_present, duplicate_error, entry_inserted, entry_found,
    internal_error};

const int maxqueue = 10000;

typedef Plane Queue_entry;
class Queue{
public:
    Queue();
    bool empty() const;
    Error_code append(const Queue_entry &x);
    Error_code serve();
    Error_code retrieve(Queue_entry &x) const;
    //   Additional members will represent queue data.
protected:
    int count;
    int front,rear;
    Queue_entry entry[maxqueue];
};

#endif /* Queue_hpp */
