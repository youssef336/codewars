// This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

// My solution

int simpleMultiplication(int a)
{
  if (a % 2 == 0)
    return a * 8;
  else
    return a * 9;
}