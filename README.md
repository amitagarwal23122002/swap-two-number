## Swapping Two Numbers Using C++
Using C++ we can swap two numbers in various methods :
- Using Temporary Variable
- Without using Temporary Variable

### [Temporary Variable](https://github.com/amitagarwal23122002/swap-two-number/blob/main/temporary_variable.cpp)
```
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
```

### [Without Temporary Variable](https://github.com/amitagarwal23122002/swap-two-number/blob/main/without_temporary_variable.cpp)
```
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
```