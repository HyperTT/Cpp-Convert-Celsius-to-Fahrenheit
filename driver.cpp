#include <iostream>
#include "convert.h"
using namespace std;

int main()
{
    cout << convert_to_fah(56.321) << endl;
    cout << convert_to_fah(0) << endl;
    cout << convert_to_fah(101.3) << endl;
    cout << convert_to_fah(45) << endl;

    return 0;
}
