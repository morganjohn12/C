//Armstrong Number=A positive integer is called an Armstrong number if the sum of cubes of individual digit is equal to that number itself.

#include <iostream>
using namespace std;

int main()
{
  int origNum, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> origNum;

  num = origNum;

  while(num != 0)
  {
      digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
  }

  if(sum == origNum)
    cout << origNum << " is an Armstrong number.";
  else
    cout << origNum << " is not an Armstrong number.";

  return 0;
}

//This program calculates an armstrong number.
/*Enter a positive integer: 371
  371 is an Armstrong number.   */
