
#include <iostream>
#include <string>

using namespace std;

string fill (unsigned int, unsigned int);
string fill (string, unsigned int);

int main () {
  const string separator = " | ";
  unsigned int x, y;
  cout << "Input x: ";
  cin >> x;
  cout << endl;
  cout << "Input y: ";
  cin >> y;
  cout << endl;

  unsigned int max = x * y;
  unsigned int spaces = 1;
  while (max / 10 > 0) {
    max /= 10;
    spaces++;
  }

  for (unsigned int b = 0; b <= y; b++) {
    for (unsigned int a = 0; a <= x; a++) {
      if (a == 0 && b == 0) cout << fill(" ", spaces) << separator;
      else if (b == 0) cout << fill(a, spaces) << separator;
      else if (a == 0) cout << fill(b, spaces) << separator;
      else cout << fill(a * b, spaces) << separator;
    }

    cout << endl;
  }

  return 0;
}

string fill (unsigned int input, unsigned int spaces) {
  string output = to_string(input);
  return fill(output, spaces);
}

string fill (string input, unsigned int spaces) {
  string output = input;
  while (output.length() < spaces) {
    output = " " + output;
  }

  return output;
}
