#include <iostream>
#include <string>
#include "Counter.h"


Counter::Counter(){
    _value = 0;
    _initValue = 0;
}
Counter::Counter(int value) {
    _value = value;
    _initValue = value;
}
void Counter::add(){
    _value++;
}
void Counter::add(int number) {
    _value += number;
}
int Counter::get() {
    return _value;
}
void Counter::reset() {
    _value = _initValue;
}


