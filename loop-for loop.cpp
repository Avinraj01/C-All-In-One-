#include <iostream>
using namespace std;

int main(){
	for(int i=0; i<10; i++){
		cout << "i: " << i << endl;
	}
	int x = 0;
	while(x < 9){
		cout << "x: " << x++ << endl;
	}
	return 0;
}
