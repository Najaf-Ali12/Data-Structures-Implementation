#include <iostream>
using namespace std;

int main() {
    // Upper part of the pattern
//    for (int i = 1; i <= 5; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//
//    // Lower part of the pattern
//    for (int i = 4; i >= 1; i--) {
//        for (int j = 1; j <= i; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }

	for (int i=1; i<=9; i+=2){
		for (int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
    for (int i=9; i>=1; i-=2){
    	for (int j=1; j<=i; j++){
    		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
