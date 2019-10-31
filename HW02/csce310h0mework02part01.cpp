#include "csce310h0mework02part01.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> placeNumbers( vector<int> numbers , string signs ){
  vector<int> output;
  int size = numbers.size() - 1;
  int last = size;
  int i=0;
  int beginning = 0;
  if(signs.at(0) == '<'){
    output.push_back(numbers.at(beginning));
    beginning++;
  } else if(signs.at(0) == '>'){
     output.push_back(numbers.at(last));
     last--;
  }
  for(i=1; i<size; i++){
    if(signs.at(i) == '<'){
      output.push_back(numbers.at(beginning));
      beginning++;
    } else if(signs.at(i) == '>'){
      output.push_back(numbers.at(last));
      last--;
    }

  } if(signs.at(i-1) == '<'){
   output.push_back(numbers.at(beginning));
 } else if(signs.at(i-1) == '>'){
  output.push_back(numbers.at(last));
 }
  return output;
}
