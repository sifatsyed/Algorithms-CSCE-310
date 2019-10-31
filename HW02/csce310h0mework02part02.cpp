#include "csce310h0mework02part02.h"
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

double closestNumbers( vector<double> numbers )
{
  double min = fabs(numbers.at(0) - numbers.at(1));
  int j = 1;
  int size = numbers.size();
  for(int i=0; i<size - 1; i++){
    double diff = fabs(numbers.at(i) - numbers.at(j));
    if(min > diff){
      min = diff;
    }
    j++;
  }
  return min;
}
