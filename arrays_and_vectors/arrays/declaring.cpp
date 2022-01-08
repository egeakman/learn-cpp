/***************************
 * The syntax is "element_type array_name[size]{initializer list}"
 ***************************/

#include <iostream>
using namespace std;

int main() {
  int array1[10]; // array1 is an array of 10 integers. the array is not
                  // initialized. This might throw a warning.

  int array2[10]{
      1, 2, 3, 4, 5,
      6, 7, 8, 9, 10}; // array2 is an array of 10 integers. the array is
                       // initialized and the values are 1,2,3,4,5,6,7,8,9,10.

  int array3[10]{
      1, 2,
      3}; // array3 is an array of 10 integers. the array is initialized and the
          // first 3 values are 1,2,3. the rest of the values are 0.

  int array4[10]{0}; // array4 is an array of 10 integers. all the values are
                     // initialized to 0.

  int array5[]{1, 2, 3, 4,
               5}; // array5 is an array of 5 integers. the array is initialized
                   // and the size is automatically determined.

  const unsigned long long days_in_year{365};
  double high_temperatures[days_in_year]{
      0}; // high_temperatures is an array of 365 unsigned long longs. all
          // values are initialized to 0.
}