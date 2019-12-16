#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

int main()
{
    SortedType <timeStamp> st;
    timeStamp ts;

    for(int i=0; i<5; i++){
        cin >> ts;
        st.InsertItem(ts);
    }

    ts = timeStamp("25", "36", "17");
    st.DeleteItem(ts);

    for(int i=0; i<st.LengthIs(); i++){
        st.GetNextItem(ts);
        cout << ts << endl;
    }

    return 0;
}
