#include <iostream>
using namespace std;

// Bare numbers are literal constants.

int main() {
  cout << "Welcome to my hotdog stand!" << endl;
  cout << "1 hotdog for $5.00" << endl;
  cout << "How many hotdogs would you like: ";
  int hotdogs{0};
  cin >> hotdogs;
  if ((hotdogs < 1) || cin.fail() == 1) {
    cout << "You must order at least one hotdog." << endl;
  } else {
    // Calculate the cost of the hotdogs + tax
    cout << "The tax is: $" << hotdogs * 5 * 0.18 << endl;
    cout << "Your total is $" << hotdogs * 5 * 1.18 << endl;
    cout << "Bon Appetit! Your receipt will be valid for " << 14 << " days."
         << endl;
  }
  return 0;
}
