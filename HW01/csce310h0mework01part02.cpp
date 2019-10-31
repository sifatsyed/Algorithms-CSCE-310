#include "csce310h0mework01part02.h"
#include <string.h>
#include <iostream>
#include <list>
#include <iterator>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>

using namespace std;

//used function to reverse string
string reverseStr(string str, int begin, int end)
{
  // int i=0;
  //   for(int i=begin; i<end; i++) {
  //       // Swap(str[l], str[r])
  //       char c = str[i];
  //       str[i] = str[end];
  //       str[end] = c;
  //       end--;
  //   }
  //   return str;
}

void printPermutations( string word , int permutations )
{

  int len = word.length();
  int x = word.length();
  int wordListCount = 0;
  for( int i = 0; i < permutations; i++ ){
      while(word[x]>=word[x+1] && x>0){
        cout << "DHHDGH" << x << endl;
        x--;

      }
    // if(x==0){
    //   x++;
    // }
      int y = x+1;
      while(word[x]<word[y]){
        cout << "YYYY " << y <<endl;
        y++;
      }
      //y--;
    swap(word[x], word[y]);
    cout << word << endl;
    reverseStr(word, x+1, len);
    //sort(word.begin(), word.end());
    //cout << word << endl;
  }
  return;
}

int main(int argc, char **argv){
  if(argc != 3){
    cout<<"Usage: ./a.out word01 word02"<<endl;
  }
  string word1 = argv[1];
  int permutations = atoi(argv[2]);
  printPermutations(word1, permutations);
}
