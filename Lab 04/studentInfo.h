#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <iostream>
#include <string>

using namespace std;

class studentInfo
{
    public:
        studentInfo();
        studentInfo(int);
        studentInfo(int, string, double);
        bool operator == (studentInfo);
        bool operator != (studentInfo);
        friend istream& operator >> (istream&, studentInfo&);
        friend ostream& operator << (ostream&, studentInfo&);

    private:
         int id;
         string name;
         double cgpa;
};

#endif // STUDENTINFO_H
