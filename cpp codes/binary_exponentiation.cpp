#include <bits/stdc++.h>

// Creating a function named power which raises the power through binary exponentiation
int power( int a, int n)
{
  int res=1;
  while(n)
  {
    if(n%2)
    {
      res*=a;
      n--;
    } else {
      a*=a;
      n/=2;
    }
  }
  return res;
}
