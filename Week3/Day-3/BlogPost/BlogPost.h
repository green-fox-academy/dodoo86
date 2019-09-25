#include <iostream>
#include <string>

using namespace std;

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

class blogPost {
public:
    blogPost(string apublicationDate, string atitle,string atext, string aauthorName);
    string publicationDate;
    string title;
    string text;
    string authorName;
};

#endif //BLOGPOST_BLOGPOST_H
