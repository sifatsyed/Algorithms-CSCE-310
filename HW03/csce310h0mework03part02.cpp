/**
 * Name: Sifat Syed
 */

#include <vector>
#include "csce310h0mework03part02.h"
#include <cmath>
#include <iostream>

#include <iterator>
#include <fstream>

using namespace std;

double minimum(double a, double b){
  if(a < b){
    return a;
  } else {
    return b;
  }
}

vector< vector<double> > allPairsSP( vector< vector<double> > adjacencyMatrix , int i ){

  int size = adjacencyMatrix.size();

  //checking for infinite values and replacing them with a larger number
  for(int row=0; row<size; row++){
    for(int column=0; column<size; column++){
      if(adjacencyMatrix[row][column] == -1){
        adjacencyMatrix[row][column] = 99999;
      }
    }
  }

  //Flyod's Algorithm
  for(int k=0; k<i; k++){
    for(int l=0; l<size; l++){
      for(int m=0; m<size; m++){
        if(l == m){
          adjacencyMatrix[l][m] = 0;
      } else {
          adjacencyMatrix[l][m] = minimum(adjacencyMatrix[l][m], (adjacencyMatrix[l][k] + adjacencyMatrix[k][m]));
        }
      }
    }
  }

  //Here, changing back the value of infinite numbers to -1
  for(int row=0; row<size; row++){
    for(int column=0; column<size; column++){
      if(adjacencyMatrix[row][column] == 99999){
        adjacencyMatrix[row][column] = -1;
      }
    }
  }

  return adjacencyMatrix;
}
