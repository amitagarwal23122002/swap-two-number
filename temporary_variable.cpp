/* Pre-processor */
#include<iostream>

using namespace std;

/* Default Main Function */
int main() {
  int x, y, swap; /* Variables */
  cout << "Enter two numbers to swap : ";
  cin >> x >> y; /* User Input */
  
  /* Calculation */
  swap = x + y;
  x = swap - x;
  y = swap - y;

  /* Final Output */
  cout << "Numbers are swapped : " << x << ", " << y << endl;
}