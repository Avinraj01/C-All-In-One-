#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char c_string[] = "Hello";
	string obj_string = "World";

	cout << c_string << ":" << strlen(c_string) << endl;
	cout << obj_string << ":" << obj_string.size() << endl;	
	// cout << obj_string << ":" << strlen(obj_string) << endl; <- Won't work, need to use object's method instead.
	return 0;
}
