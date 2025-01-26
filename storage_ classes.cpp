#include <iostream>
using namespace std;

int main(){
	/* Using keyword register might put counter
	 * in a register rather than memory. But
	 * probably won't
	*/
	register int counter;

	for(counter=0; counter<1000000; counter++){
		cout << counter << endl;
	}
}
