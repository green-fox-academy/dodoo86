#include "Tang.h"

Tang::Tang(string name, int weight, string colour, string memoryLoss) : Fish (name, weight, colour), _memoryLoss(memoryLoss)  {}

void Tang::feed() {
    _weight ++;
}

void Tang::status() {
     cout<< _name + ", weight: " + to_string(_weight) + ", colour: " + _colour + ", short-term memory loss: " + _memoryLoss<<endl;
}






