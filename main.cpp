#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;

int main() {

  int task1=assignment::squared_diff(3,5);
  cout<<task1;
  int n;
  cin>>n;
  int mass[n];
  int* point_on_mass = &mass[0];
  for(int j = 0 ; j<n;j++)
  {
    cin>>mass[j];
  }
  int task5=assignment::arr_sum(point_on_mass,3);
  cout<<task5;
}
