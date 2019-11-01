#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#include <iostream>
#include <string>

using namespace std;

class timeStamp
{
    public:
        timeStamp();
        timeStamp(string, string, string);
        bool operator == (timeStamp);
        bool operator != (timeStamp);
        bool operator > (timeStamp);
        bool operator < (timeStamp);
        friend istream& operator >> (istream&, timeStamp&);
        friend ostream& operator << (ostream&, timeStamp&);

    private:
         string ss, mm, hh;
};

#endif // TIMESTAMP_H
