/**
 * Name: Sifat Syed
 */

#include <vector>
#include "csce310h0mework03part01.h"
#include <cmath>
#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;

double maximumST(vector < vector < double > > adjacencyMatrix) {

  vector < int > nodeValue;
  nodeValue.push_back(0);
  double result = 0;

  int size = adjacencyMatrix.size();

  double max = adjacencyMatrix[0][0];

  int a = 0, b = 0;
  int i, j, k;

  /**
  * Making the first column zero, as we have already pushed
  * it to the vector
  */
  for(int z=0; z<size; z++){
    adjacencyMatrix[z][0] = 0;
  }
  while (nodeValue.size() < size) {
    for (i = 0; i < nodeValue.size(); i++) {
      for (j = 0; j < size; j++) {
          if (max < adjacencyMatrix[nodeValue[i]][j]) {
            max = adjacencyMatrix[nodeValue[i]][j];
            a = nodeValue[i];
            b = j;
          }
      }
    }

    result += max;
    nodeValue.push_back(b);
    adjacencyMatrix[a][b] = 0;
    adjacencyMatrix[b][a] = 0;

    /**
     * Making the column zero, as we have already
     * pushed it back so that the spanning tree does
     * not become cyclic
     */
    for( int l = 0; l < size; l++){
      adjacencyMatrix[l][b] = 0;
    }
    /**
     * Resetting the max value to zero, as we want
     * to have various values for our maximum
     */
    max = 0;
  }

  return result;
}
