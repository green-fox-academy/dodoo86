//
// Created by David T Laszlo on 2019. 09. 30..
//

#ifndef GFORGANIZATION_COHORT_H
#define GFORGANIZATION_COHORT_H

#include <vector>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"

using namespace std;

class Cohort: public Person{
public:
    Cohort (string name);
    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

protected:
    string _name;
    vector<Student*> _students;
    vector<Mentor*> _mentors;


};


#endif //GFORGANIZATION_COHORT_H
