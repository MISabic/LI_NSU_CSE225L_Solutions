/**


    *********************************************
    ***         C++ IS CASE SENSITIVE         ***
    *** nArr AND narr ARE TWO DIFFERENT NAMES ***
    *********************************************


    * We will create two files for every different class.

        1. xyz.h -> This is HEADER file. We will only write the FUNCTION NAME, FUNCTION RETURN TYPE AND RETURN TYPE(S) OF THE PARAMETER(S) in here. For example

            class dynArr
            {
                private:
                    int row, column;
                public:
                    dynArr();
                    ~dynArr();
                    void allocate(int, int);
                    void print();
            };

        2. xyz.cpp -> This is SOURCE file. We will write the definition(s) of those function(s) in here. For example

            void dynArr::allocate(int row, int column)
            {
                delete [] data;
                data = new int*[row];
                for(int i=0; i<row; i++)
                {
                    data[i] = new int[column];
                }
                this->row = row;
                this->column = column;
            }


    * EVERYTIME YOU NEED TO ADD NEW FUNCTION/METHOD IN YOUR CLASS   "YOU HAVE TO"   ADD THE     "FUNCTION NAME, FUNCTION RETURN TYPE AND RETURN TYPE(S) OF THE PARAMETER(S)"    IN XYZ.H
        AND THEN    "WRITE THE DEFINITION(S) OF THOSE FUNCTION(S)"   IN XYZ.CPP

    * We have three types of access modifiers in C++. Public, Protected and Private.

        Public      ->  This type of variables/attributes, functions/methods can be accessed BY ANY CLASS
        Protected   ->  This type of variables/attributes, functions/methods can be accessed BY ANY SUBCLASS OF THAT CLASS
        Private     ->  This type of variables/attributes, functions/methods can    NOT     BE ACCESSED DIRECTLY BY ANY OTHER CLASS

    * Classname, constructor name and destructor name will always be the same

    * We use ~ to indicate a destructor

    * To locate a class member (variable/attribute, function/method), we will write CLASS_NAME::METHOD_NAME

    * Destructor automatically get called at the end of the program


*/
