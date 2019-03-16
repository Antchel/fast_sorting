/*
  Author: Golovenko Anton
  Task solved 16 March 2019
*/
#include "iostream"
#include "test_task.h"

using namespace std;

int main()
{
    int *a;
    int16_t n;   // from -32768 to 32767, max size array 10000.
    // signed int was chosen to defence user from uncorrect input

    n = get_array_length(); // User input size array

    a = new int[n]; // memory for array

    a = get_array_data(n); // user input array data

    sort_array(n,a);

    delete a;

    return 0;
}
