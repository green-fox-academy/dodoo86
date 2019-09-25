#include <iostream>
#include <string>
#include "BlogPost.h"

using namespace std;

int main(){
    blogPost first("2000.05.04.","Lorem Ipsum","Lorem ipsum dolor sit amet.","John Doe");
    blogPost second("2010.10.10.","Wait but why","A popular long-form, stick-figure-illustrated blog about almost everything.","Tim Urban");
    blogPost third("2017.03.28.","One Engineer Is Trying to Get IBM to Reckon With Trump","Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.","William Turton");

    cout<<third.text<<endl;
    return 0;
}