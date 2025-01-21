include <iostream>

using namespace std;

int main(){
  // Declare some variables
  int age;
  int salary;
  float pension_contribution;

  // Initialisation
  age = 21;
  salary = 20000;
  pension_contribution = 3.2;

  // Some output
  cout << "Salary:" << salary << endl;
  cout << "Pension amount:" << (salary * pension_contribution) / 100 << endl;
}
