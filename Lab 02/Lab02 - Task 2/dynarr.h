#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:
    int *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();

    void allocate(int);

    void setValue(int, int);
    int getValue(int);
    void print();
};

#endif // DYNARR_H_INCLUDED
