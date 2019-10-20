#ifndef CLASS_PRACTICE_POSTIT_H
#define CLASS_PRACTICE_POSTIT_H

#include <string>

using namespace std;

class PostIt {
public:
    string backgroundColor;

    PostIt(const string &backgroundColor, const string &text, const string &textColor);

    string text;
    string textColor;
};


#endif //CLASS_PRACTICE_POSTIT_H
