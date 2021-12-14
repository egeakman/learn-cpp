#include <cfloat>
#include <climits>
#include <iostream>

using namespace std;

int main() {
  // Chars
  char a{'a'};
  // char16_t b{'b'};
  // char32_t c{'c'};
  // wchar_t d{'d'};

  // Integers
  short e{-32768};
  unsigned short f{65535};
  int h{-2147483648};
  unsigned int i{4294967295};
  long j{-2147483648};
  unsigned long k{4294967295};
  long long l{-9223372036854775808LL};
  unsigned long long m{18446744073709551615U};

  // Floats
  float n{3.402823466e+38f};
  double o{1.7976931348623158e+308};
  long double p{1.7976931348623158e+308};

  // Boolean
  bool q{true};
  bool r{false};

  // Console out variables
  cout << "a: " << sizeof(a) << endl;
  // cout << "b: " << sizeof(b) << endl;
  // cout << "c: " << sizeof(c) << endl;
  // cout << "d: " << sizeof(d) << endl;
  cout << "e: " << sizeof(e) << endl;
  cout << "f: " << sizeof(f) << endl;
  cout << "h: " << sizeof(h) << endl;
  cout << "i: " << sizeof(i) << endl;
  cout << "j: " << sizeof(j) << endl;
  cout << "k: " << sizeof(k) << endl;
  cout << "l: " << sizeof(l) << endl;
  cout << "m: " << sizeof(m) << endl;
  cout << "n: " << sizeof(n) << endl;
  cout << "o: " << sizeof(o) << endl;
  cout << "p: " << sizeof(p) << endl;
  cout << "q: " << sizeof(q) << endl;
  cout << "r: " << sizeof(r) << endl;

  // Console out types

  cout << "char: " << sizeof(char) << endl;
  cout << "short: " << sizeof(short) << endl;
  cout << "int: " << sizeof(int) << endl;
  cout << "long: " << sizeof(long) << endl;
  cout << "long long: " << sizeof(long long) << endl;
  cout << "float: " << sizeof(float) << endl;
  cout << "double: " << sizeof(double) << endl;
  cout << "long double: " << sizeof(long double) << endl;
  cout << "bool: " << sizeof(bool) << endl;
  cout << "unsigned char: " << sizeof(unsigned char) << endl;
  cout << "unsigned short: " << sizeof(unsigned short) << endl;
  cout << "unsigned int: " << sizeof(unsigned int) << endl;
  cout << "unsigned long: " << sizeof(unsigned long) << endl;
  cout << "unsigned long long: " << sizeof(unsigned long long) << endl;

  // Console out max values
  cout << "char max: " << CHAR_MAX << endl;
  cout << "short max: " << SHRT_MAX << endl;
  cout << "int max: " << INT_MAX << endl;
  cout << "long max: " << LONG_MAX << endl;
  cout << "long long max: " << LLONG_MAX << endl;
  cout << "float max: " << FLT_MAX << endl;
  cout << "double max: " << DBL_MAX << endl;
  cout << "long double max: " << LDBL_MAX << endl;

  // Console out min values
  cout << "char min: " << CHAR_MIN << endl;
  cout << "short min: " << SHRT_MIN << endl;
  cout << "int min: " << INT_MIN << endl;
  cout << "long min: " << LONG_MIN << endl;
  cout << "long long min: " << LLONG_MIN << endl;
  cout << "float min: " << FLT_MIN << endl;
  cout << "double min: " << DBL_MIN << endl;
  cout << "long double min: " << LDBL_MIN << endl;
  return 0;
}