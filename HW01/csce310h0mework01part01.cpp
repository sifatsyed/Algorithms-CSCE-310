/**
 * Author : Sifat Syed
 * Date : September 21, 2019
 *
 * This program prints common letters between two strings
 */

#include "csce310h0mework01part01.h"
#include <string>
#include<cstdio>
#include<iostream>

using namespace std;

string commonLetters( string word01 , string word02 ){
  string common = "";

  //Running through both the strings and checking for common letters
  for(int i=0; i<word01.length(); i++){
    for(int j=0; j<word02.length(); j++){
      if(word01[i] == word02[j]){
        //checking if the string already consists that letter
        char repeat = word01[i];
        size_t found = common.find(repeat);
       //If the word is not present in string then adding it to string
       if(found == string::npos && word01[i] != word02[j+1]){
        common += word01[i];
       }
      }
    }
  }
  return common;
}
