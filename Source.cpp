#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool IsLoggedIn() {
	string username, password, un, pw;

	cout << "Enter username: "; cin >> username;
	cout << "Enter password: "; cin >> password;

	ifstream read("data\\" + username + ".txt");
	getline(read, un);
	getline(read, pw);
	return username == un && password == pw;
}

int main() {
	std::cout << "Hello World\r\n";
	return 0;
}