#include "timeStamp.h"

timeStamp::timeStamp()
{

}

timeStamp::timeStamp(string ss, string mm, string hh)
{
    this->ss = ss;
    this->mm = mm;
    this->hh = hh;
}

bool timeStamp::operator == (timeStamp ts)
{
    if(ss == ts.ss && mm == ts.mm && hh == ts.hh)
        return true;
    else
        return false;
}

bool timeStamp::operator != (timeStamp ts)
{
    if(ss != ts.ss && mm != ts.mm && hh != ts.hh)
        return true;
    else
        return false;
}

bool timeStamp::operator < (timeStamp ts)
{
    if(hh < ts.hh || ((hh == ts.hh) && (mm < ts.mm)) || ((hh == ts.hh) && (mm == ts.mm) && (ss < ts.ss)))
        return true;
    else
        return false;
}

bool timeStamp::operator > (timeStamp ts)
{
    if(hh > ts.hh || ((hh == ts.hh) && (mm > ts.mm)) || ((hh == ts.hh) && (mm == ts.mm) && (ss > ts.ss)))
        return true;
    else
        return false;
}

istream& operator >> (istream& is, timeStamp& ts)
{
    is >> ts.ss >> ts.mm >> ts.hh;
    return is;
}

ostream& operator << (ostream& os, timeStamp& ts)
{
    os << ts.ss << ":" << ts.mm << ":" << ts.hh;
    return os;
}
