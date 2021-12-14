#include <iostream>
using namespace std;

int main() {
  cout << "This will calculate the area of a quadrilateral.\n" << endl;
  int x{0};
  int y{0};
  cout << "Enter the side lengths of the quadrilateral: ";
  cin >> x >> y;
  cout << "The area of the quadrilateral is " << x * y << endl;
}