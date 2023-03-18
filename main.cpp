#include <iostream>
using namespace std;

int main() {
  int a = 4;  //100
  int b = 6;  //110

  cout << "a & b = " << (a&b) << endl; // 100 = 4
  cout << "a | b = " << (a|b) << endl; // 110 = 6
  cout << "~a = " << (~a) << endl; // 110 = 3
  cout << "a ^ b = " << (a^b) << endl; // 010 = 2
}