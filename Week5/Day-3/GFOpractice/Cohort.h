#ifndef GFOPRACTICE_COHORT_H
#define GFOPRACTICE_COHORT_H


#include <vector>
#include "Person.h"
#include "Student.h"
#include "Mentor.h"

class Cohort : public Person{
public:
    Cohort(string name);
    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();

protected:
    string _name;
    vector<Student*> _students;
    vector<Mentor*> _mentors;

};


#endif //GFOPRACTICE_COHORT_H
