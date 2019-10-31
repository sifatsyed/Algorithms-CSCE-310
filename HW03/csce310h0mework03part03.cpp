/**
 * Name: Sifat Syed
 */

#include <vector>
#include "csce310h0mework03part03.h"
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int hornersRule( vector<int> coeffs , int value ){
  int size = coeffs.size();
  int sum = coeffs.at(0);
  for(int i=1; i<size; i++){
    sum = (sum * value) + coeffs[i];
  }
  return sum;
}
