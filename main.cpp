#include <iostream>
using namespace std;

int main() {
  int a = 4;  //100
  int b = 6;  //110

  cout << "a & b = " << (a&b) << endl; // 100 = 4
  cout << "a | b = " << (a|b) << endl; // 110 = 6
  cout << "~a = " << (~a) << endl; // 110 = 3
  cout << "a ^ b = " << (a^b) << endl; // 010 = 2

  cout << (a << 6) << endl;
  // 17 -> 10001
  cout << (17 << 1) << endl; //34
  cout << (17 >> 1) << endl; //8
  cout << (17 >> 2) << endl; //4

  int i = 9;

  cout << i++ << endl;  //9
  cout << ++i << endl;  //11
  cout << i-- << endl;  //11
  cout << --i << endl;  //9

  int a1, b1 = 1;
  a1 = 10;
  if (++a1)
    cout << b1 << endl;      
  else 
    cout << ++b1 << endl;

  // OUTPUT : 1

  int a2 = 1;
  int b2 = 2;

  if(a2-- > 0 && ++b2 > 2) {
    cout << "Stage1 - Inside If ";
  }
  else {
    cout << "Stage2 - Inside else ";
  }
  cout << a2 << " " << b2 << endl;

  // OUTPUT : Stage1 - Inside If 0 3

  int a3 = 1;
  int b3 = 2;

  if(a3-- > 0 || ++b3 > 2) {
    cout << "Stage1 - Inside If ";
  }
  else {
    cout << "Stage2 - Inside else ";
  }
  cout << a3 << " " << b3 << endl;

  // OUTPUT : Stage1 - Inside If 0 2

  int a4 = 3;
  cout << (25 * (++a4)) << endl;

  // OUTPUT : 100

  int a5 = 1;
  int b5 = a5++; //a = 2  b= 1
  int c5 = ++a5; //a = 3  c = 3
  cout << b5 << endl;  //1
  cout << c5 << endl;  //3

/******************FOR LOOP**************************/

  // int n ;
  // cout << "Enter the value of n: ";
  // cin >> n;

  // cout << "printing count from 1 to n" << endl;

  // int x;
  // int sum = 0;
  // for(x = 1; x <= n; x++){
  //   sum = sum + x;
  // }
  // cout << sum;
  /******************************************/
  
  // int n = 10;
  // int x;


  // int a6 = 0;
  // int b6 = 1;
  // int sum = 0;
  // for (x = 1; x <= n; x++) {
  //   sum = a6 + b6;
  //   cout << sum << " ";
  //   a6 = b6;
  //   b6 = sum;
  // }
  /******************************************/

  // int n;
  // cout << "Enter a number : ";
  // cin >> n;

  // bool isPrime = 1;

  // for (int i = 2; i <n; i++) {
  //   if(n%i == 0) {
  //     // cout << "Not a prime no." << endl;
  //     isPrime = 0;
  //     break;
  //   }
  // }

  // if(isPrime) {
  //     cout << "Prime no." << endl;
  // }
  // else {
  //   cout << "Not a Prime";
  // }
  
  // for(int i = 0; i <=5; i++) {
  //   cout << i << " ";
  //   i++;
  // }
  
  // for(int i = 0; i <=5; i--) {
  //   cout << i << " ";
  //   i++;
  // }
  
  // for (int i = 0; i <=15; i+=2) {
  //   cout << i << " ";

  //   if( i&1 ) {
  //     continue;
  //   }

  //   i++;
  // }

  // OUTPUT : 0 3 5 7 9 11 13 15

  // for(int i = 0; i < 5; i++) {
  //   for (int j = i; j <=5; j++) {
  //     cout << i << " " << j << endl;
  //   }
  // }

  // for(int i = 0; i<5; i++) {
  //   for(int j = i; j<=5; j++) {
  //     if(i+j == 10) {
  //       break;
  //     }
  //     cout<<i<< " "<<j<< endl;
  //   }
  // }


  
}