#include <iostream>
using namespace std;

void add(int n);

static int total = 0;

int main(){
	add(5);
	add(7);
	add(19);

	cout << "Total is:" << total << endl;
}

void add(int n){
	static int total_num = 0;
	total += n;
	total_num++;	
	cout << "Total numbers is:" << total_num << endl;

}
