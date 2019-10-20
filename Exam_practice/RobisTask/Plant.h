//
// Created by David T Laszlo on 2019. 10. 20..
//

#ifndef ROBISTASK_PLANT_H
#define ROBISTASK_PLANT_H

#include <string>
using namespace std;


class Plant {
protected:
    float _waterLevel;
    string _colour;
    float _waterNeed;
    float _efficiency;
public:
    Plant(string);
    bool needWater();
    void gotWater(int);

};


#endif //ROBISTASK_PLANT_H
