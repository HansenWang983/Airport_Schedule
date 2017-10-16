//
//  Extended_Queue.hpp
//  Airport_Schedule
//
//  Created by hansen on 2017/10/13.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef Extended_Queue_hpp
#define Extended_Queue_hpp
#include "Queue.hpp"



class Extended_Queue: public Queue
{
public:
    bool full() const;
    int  size() const;
    void clear();
    Error_code serve_and_retrieve(Queue_entry &item);
};

#endif /* Extended_Queue_hpp */
