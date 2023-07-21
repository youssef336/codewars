// Clock shows h hours, m minutes and s seconds after midnight.

//                      Your task is to write a function which returns the time since midnight in milliseconds.

//                      Example : h = 0 m = 1 s = 1

//                      result = 61000 Input constraints :

//                               0 <= h <= 23 0 <= m <= 59 0 <= s <= 59

// My solution

int past(int h, int m, int s)
{
  int hour = 0;
  int minite = 0;
  int secound = 0;
  int milisecound = 0;
  int result = 0;

  if (h < 24)
  {
    hour = h * 60 * 60;
    secound += hour;
  }
  if (m < 60)
  {
    minite = m * 60;
    secound += minite;
  }
  milisecound = secound + s;
  result = milisecound * 1000;
  return result;
}

// OR

int past(int h, int m, int s)
{
  int totalsecend = h * 60 * 60 + m * 60 + s;
  int totalmilisecend = totalsecend * 1000;
  return totalmilisecend;
}