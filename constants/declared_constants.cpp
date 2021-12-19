#include <iostream>
using namespace std;

// Constants are declared with the const keyword.

int main() {
  const double TAX_RATE{0.18};
  const double SMALL_HOTDOG_PRICE{3.00};
  const double LARGE_HOTDOG_PRICE{5.00};
  const int RECEIPT_VALIDITY_DAYS{14};

  cout << "Welcome to my hotdog stand!" << endl;
  cout << "1 small hotdog for $" << SMALL_HOTDOG_PRICE << endl;
  cout << "1 large hotdog for $" << LARGE_HOTDOG_PRICE << endl;

  cout << "How many small hotdogs would you like: ";
  int small_hotdogs{0};
  cin >> small_hotdogs;

  cout << "How many large hotdogs would you like: ";
  int large_hotdogs{0};
  cin >> large_hotdogs;

  if ((small_hotdogs == 0 && large_hotdogs == 0) || cin.fail() == 1) {
    cout << "You must order at least one hotdog." << endl;
  } else {
    // Calculate the cost of the hotdogs + tax
    double small_hotdog_total_cost{small_hotdogs * SMALL_HOTDOG_PRICE};
    double large_hotdog_total_cost{large_hotdogs * LARGE_HOTDOG_PRICE};
    double total_tax{(large_hotdog_total_cost + small_hotdog_total_cost) *
                     TAX_RATE};
    double total_cost{small_hotdog_total_cost + large_hotdog_total_cost +
                      total_tax};

    cout << "Small hotdogs total price without tax: $"
         << small_hotdog_total_cost << endl;
    cout << "Large hotdogs total price without tax: $"
         << large_hotdogs * LARGE_HOTDOG_PRICE << endl;
    cout << "The tax is: $" << total_tax << endl;
    cout << "Your total is $" << total_cost << endl;
    cout << "Bon Appetit! Your receipt will be valid for "
         << RECEIPT_VALIDITY_DAYS << " days." << endl;
  }

  return 0;
}