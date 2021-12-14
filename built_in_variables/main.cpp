#include <iostream>
using namespace std;

int main() {
  // Chars
  char a{'a'};
  // char16_t b{'b'};
  // char32_t c{'c'};
  // wchar_t d{'d'};

  // Integers
  short g{-32768};
  unsigned short h{65535};
  int i{-2147483648};
  unsigned int j{4294967295};
  long k{-2147483648};
  unsigned long l{4294967295};
  long long m{-9223372036854775808LL};
  unsigned long long n{18446744073709551615U};

  // Floats
  float o{3.402823466e+38f};
  double p{1.7976931348623158e+308};
  long double q{1.7976931348623158e+308};

  // Boolean
  bool r{true};
  bool s{false};

  // Console out
  cout << "a: " << a << endl;
  // cout << "b: " << b << endl;
  // cout << "c: " << c << endl;
  // cout << "d: " << d << endl;
  cout << "g: " << g << endl;
  cout << "h: " << h << endl;
  cout << "i: " << i << endl;
  cout << "j: " << j << endl;
  cout << "k: " << k << endl;
  cout << "l: " << l << endl;
  cout << "m: " << m << endl;
  cout << "n: " << n << endl;
  cout << "o: " << o << endl;
  cout << "p: " << p << endl;
  cout << "q: " << q << endl;
  cout << "r: " << r << endl;
  cout << "s: " << s << endl;

  return 0;
}