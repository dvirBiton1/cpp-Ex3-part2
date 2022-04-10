/**
 * Demo file for the exercise on numbers with units
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 * 
 * Edited by Tal Zichlinsky
 * @since 2022-02
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "Matrix.hpp"
using namespace zich;

int main() {
  
  std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
  std::vector<double> arr = {1, 0, 0, 0, 1, 0, 0, 0, 1};
  Matrix a{identity, 3, 3};  // constructor taking a vector and a matrix size
  Matrix b{identity, 3, 3};
  cout << a << endl<< endl;
  /* prints [1 0 0]
            [0 1 0]
            [0 0 1]*/
  cout << (a + a) << endl<< endl;
  /* prints [2 0 0]
            [0 2 0]
            [0 0 2]*/
  cout << (a++) << endl<< endl;
  /* prints [1 0 0]
            [0 1 0]
            [0 0 1]*/          
  cout << a <<endl<< endl;
  /* prints [2 1 1]
            [1 2 1]
            [1 1 2]*/
  cout << (++a) <<endl<< endl;
  /* prints [3 2 2]
            [2 3 2]
            [2 2 3]*/
  cout << (a) << endl << endl;
  /* prints [3 2 2]
            [2 3 2]
            [2 2 3]*/ 
  a += b;
  cout << (a) << endl << endl;
  /* prints [4 2 2]
            [2 4 2]
            [2 2 4]*/
  cout << (a-b) << endl << endl;
  /* prints [3 2 2]
            [2 3 2]
            [2 2 3]*/
  cout << (a--) << endl << endl;
  /* prints [4 2 2]
            [2 4 2]
            [2 2 4]*/
  cout << (a) << endl << endl;
  /* prints [3 1 1]
            [1 3 1]
            [1 1 3]*/
  cout << (--a) << endl << endl;
  /* prints [2 0 0]
            [0 2 0]
            [0 0 2]*/
  cout << (a) << endl << endl;
  /* prints [2 0 0]
            [0 2 0]
            [0 0 2]*/
  a -= b;
  cout << (a) << endl << endl;
  /* prints [1 0 0]
            [0 1 0]
            [0 0 1]*/
  cout << (a*b) << endl << endl;
  /* prints [1 0 0]
            [0 1 0]
            [0 0 1]*/
  a*=b;
  cout << (a) << endl << endl;
  /* prints [1 0 0]
            [0 1 0]
            [0 0 1]*/
  cout << (a*2) << endl << endl;
  /* prints [2 0 0]
            [0 2 0]
            [0 0 2]*/
  a *= 2;
  cout << (a) << endl << endl;
  /* prints [2 0 0]
            [0 2 0]
            [0 0 2]*/
  cout << (a > b) << endl << endl;
  /* prints true */
  cout << (a >= b) << endl << endl;
  /* prints true */
  cout << (a < b) << endl << endl;
  /* prints false */
  cout << (a <= b) << endl << endl;
  /* prints false */
  cout << (a == b) << endl << endl;
  /* prints false */
  cout << (a != b) << endl << endl;
  /* prints true */
  cout << (+a) << endl << endl;
  /* prints [2 0 0]
            [0 2 0]
            [0 0 2]*/
  cout << (-a) << endl << endl;
  /* prints [-2 0 0]
            [0 -2 0]
            [0 0 -2]*/
  cout << (2 * a) << endl << endl;
  /* prints [4 0 0]
            [0 4 0]
            [0 0 4]*/
  cout << "enter your matrix\n";
  cin >> a;
  cout << (a) << endl << endl;
            
  cout << "End of demo!" << endl;
  return 0;
}