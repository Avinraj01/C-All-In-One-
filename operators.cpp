#include <iostream>
using namespace std;

int main(){
  int num = 10; // 0000 1010 in binary
  num <<= 2; // Shift binary digits 2 places: 0010 1000 = 32 + 8 = 20
  cout << num << endl;
  return 0;
}
