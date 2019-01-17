//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_TRANSPORTER_H
#define OOPPROJECT_TRANSPORTER_H

#include "Vehicle.h"

class Transporter:public Vehicle {
public:
    int load;
public:
    Transporter(int,int,string);
    int getLoad();
    double getPrice();
    virtual string vehicleInfo();
    ~Transporter()=default;
};
typedef shared_ptr<Transporter>T_ptr;

#endif //OOPPROJECT_TRANSPORTER_H
