#include <iostream>
#include <string>

using namespace std;

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter();
    Counter(int value);
    int get();
    void add(int number);
    void add();
    void reset();
private:
   int _value;
   int _initValue;

};


#endif //COUNTER_COUNTER_H
