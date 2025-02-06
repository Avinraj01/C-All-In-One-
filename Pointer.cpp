#include  <iostream>
using namespace std;

int main(){

  int number = 50;
  int *pointer; // Holds the location of a variable

  pointer = &number; // & is used to reference location of pointer

  cout << "Number (accessed from pointer): " << *pointer << endl;

  number = 100; // Number is updated but the pointer should update too

  cout << "Number (accessed from pointer): " << *pointer << endl;

  return 0;
}
