#include <iostream>

using namespace std;

int main()
{
    int *p_int;
    int input;
    input = 30;
    p_int = &input;
    cout << *p_int << endl;
}
