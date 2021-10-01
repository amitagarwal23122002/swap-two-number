/* Pre-processor */
#include<iostream>

using namespace std;

/* Default Main Function */
int main() {
  int x, y; /* Variables */
  cout << "Enter two numbers to swap : ";
  cin >> x >> y; /* User Input */

  /* Calculation */
  x = x + y;
  y = x - y;
  x = x - y;

  /* Output */
  cout << "Numbers are swapped : " << x << ", " << y << endl;
}
