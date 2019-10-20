#include <iostream>
#include "Cohort.h"


Cohort::Cohort(string name){
    _name = name;
}
void Cohort::addMentor(Mentor * mentor) {
    _mentors.push_back(mentor);
}
void Cohort::addStudent(Student * student) {
    _students.push_back(student);
}
void Cohort::info() {
    cout<<"The "<< _name<<" cohort has "<< _students.size() <<" students and "<< _mentors.size()<<" mentors currently"<<endl;
}