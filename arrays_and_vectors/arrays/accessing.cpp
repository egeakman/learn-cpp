#include <iostream>
using namespace std;

int main() {
  // Accessing array elements.The syntax is "array_name[index]".
  int array1[5]{1, 2, 3, 4, 5};
  cout << "First element of array1: " << array1[0]
       << endl; // First element of array1.
  cout << "Second element of array1: " << array1[4]
       << endl; // Last element of array1.

  // Modifying array elements.The syntax is "array_name[index] = value".
  int array2[5];
  cout << "Assign the elements of array2[5] (seperated by spaces): ";
  cin >> array2[0]; // Assigns the value to the first element of array2.
  cin >> array2[1]; // Assigns the value to the second element of array2.
  cin >> array2[2]; // Assigns the value to the third element of array2.
  cin >> array2[3]; // Assigns the value to the fourth element of array2.
  cin >> array2[4]; // Assigns the value to the fifth element of array2.

  cout << "The elements of array2 are: " << endl;
  cout << array2[0] << endl; // First element of array2.
  cout << array2[1] << endl; // Second element of array2.
  cout << array2[2] << endl; // Third element of array2.
  cout << array2[3] << endl; // Fourth element of array2.
  cout << array2[4] << endl; // Fifth element of array2.

  array2[3] = 10; // Changes the value of the fourth element of array2 to 10.

  cout << "Values after changing the fourth element of array2 to 10:" << endl;
  cout << array2[0] << endl; // First element of array2.
  cout << array2[1] << endl; // Second element of array2.
  cout << array2[2] << endl; // Third element of array2.
  cout << array2[3] << endl; // Fourth element of array2.
  cout << array2[4] << endl; // Fifth element of array2.
}