#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	/* initialize random seed: */
	srand (time(NULL));
	int x;
	x = rand() % 20;

	if (x > 10){
		cout << x << " is bigger than ten" << endl;
	} else{
		cout << x << " is smaller than ten" << endl;
	}
	return 0;
}
