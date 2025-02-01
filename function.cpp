#include <iostream>
using namespace std;

void addOne(int &a){ // Example pass by reference
	a++;
}

int main(){
	int b = 0;
	addOne(b);
	addOne(b);
	addOne(b);

	cout << b << endl; // Will equal 3
	return 0;
}
