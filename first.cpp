#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int returnGreaterOne(int a,int b){
	if (a>b) {
		return a;
	}else{
		return b;
	}
}
int main() {
		// enum Fruits {banana,apple,strawberry};
		// Fruits a = banana;
		// switch (a) {
		// 	case banana: cout<< "BANANA\v\naaaaa\rssssssss"<<endl; break;
		// 	case apple: cout<< "APPLE"<<endl; break;
		// 	case strawberry: cout<< "STRAWBERRY"<<endl; break;
		// }
		// int f,f2;
		// cout << "Give me first number:" << endl;
		// cin >> f;
		// cout << "Give me second number:" << endl;
		// cin >> f2;
		// cout << returnGreaterOne(f,f2) << endl;
		// srand( (unsigned)time( NULL ) );
		// for (size_t j = 0; j < 15; j++) {
		// 	cout << rand()%8 << endl;
		// }
		int* a;
		int b = 116261;
		a = &b;
		cout << a << '\n';
		cout << *a << '\n';
		cout << "DUPAAAAAAAAAAAA	" << '\n';
		return 0;
}
