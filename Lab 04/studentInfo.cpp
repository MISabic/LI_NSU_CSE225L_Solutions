#include "studentInfo.h"

studentInfo::studentInfo()
{

}

studentInfo::studentInfo(int id)
{
    this->id = id;
}

studentInfo::studentInfo(int id, string name, double cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

bool studentInfo::operator == (studentInfo student)
{
    if(id == student.id)
        return true;
    else
        return false;
}

bool studentInfo::operator != (studentInfo student)
{
    if(id != student.id)
        return true;
    else
        return false;
}

istream& operator >> (istream& is, studentInfo& student)
{
    is >> student.id >> student.name >> student.cgpa;
    return is;
}

ostream& operator << (ostream& os, studentInfo& student)
{
    os << student.id << ", " << student.name << ", " << student.cgpa;
    return os;
}


