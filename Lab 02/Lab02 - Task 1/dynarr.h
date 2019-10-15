/**

we will use ifndef, define, endif to resolve the problem of "redeclaration of header file"

ifndef -> if not defined
endif  -> if we use ifndef we have to end it with endif

*/

#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:
    int *data;
    int size;
public:
    dynArr();   // default constructor; the name will be same as class_name
    dynArr(int);    // constructor with one int value
    ~dynArr();  // destructor; starts with ~ ;  the name will be same as class_name
    void setValue(int, int);
    int getValue(int);
    void print();
};

#endif // DYNARR_H_INCLUDED
