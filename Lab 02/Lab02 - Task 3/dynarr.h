#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
private:
    int **data;
    int row, column;
public:
    dynArr();
    dynArr(int, int);
    ~dynArr();
    void allocate(int, int);
    void setValue(int, int, int);
    int getValue(int, int);
    void print();
};

#endif // DYNARR_H_INCLUDED
