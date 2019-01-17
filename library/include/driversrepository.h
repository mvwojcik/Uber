//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVERSREPOSITORY_H
#define OOPPROJECT_DRIVERSREPOSITORY_H


#include "Driver.h"
#include "repository.h"

class DriversRepository: public Repository<Driver_ptr> {

public:
    DriversRepository();
    bool add(Driver_ptr Driver);
    bool remove(Driver_ptr Driver);
    std::list<Driver_ptr> getAll();
    ~DriversRepository();
};


#endif //OOPPROJECT_DRIVERSREPOSITORY_H
