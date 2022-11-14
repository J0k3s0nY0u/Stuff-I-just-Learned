#include <iostream>

using namespace std;

int main() {
	
	string name;
	int age;
	
	cout << "Hey there! =) " << endl;
	cout << "What's your name?: ";
	getline(cin, name);
	
	cout << "How old are you?: ";
	cin >> age;
	
	cout << "So you're " << name << " and you're " << age << " years old" << endl;
	return 0;
}