#include<iostream>
#include<string >
#include<cmath >
using namespace std;
void name() {

	cout << "my name is enlil";
	cout << "iam  cs student this is  my first project on linkedin ";
}
enum status { single, married };
enum gender { m, f };

struct Communicationmethods {
	string email;
	string phone;
};

double dsalary(int salary) {

	return 12 * salary;
}



struct personal_information {
	string name;
	string city;
	string country;
	int age;

	Communicationmethods com;

	status Status;
	gender ll;

};
int main() {

	personal_information detels;
	detels.age; int  g;int  s;float salary;
	detels.city;
	detels.country;
	detels.ll;
	detels.name;
	detels.Status;
	detels.com.email;
	detels.com.phone;
	cout << "please enter value";
	cin >> detels.age;
	cin.ignore(1, '\n');
	getline(cin, detels.city);

	cin >> salary;
	cin.ignore(1, '\n');
	getline(cin, detels.country);

	cin >> g;detels.ll = (gender)g;
	cin.ignore(1, '\n');
	getline(cin, detels.name);

	cin >> s;detels.Status = (status)s;
	cin.ignore(1, '\n');
	getline(cin, detels.com.email);

	getline(cin, detels.com.phone);

	cout << detels.age << endl << detels.city << endl << detels.country << endl;
	cout << detels.ll << endl << detels.name << endl;
	cout << detels.Status << endl << detels.com.email << endl << detels.com.phone;
	name();

	cout << dsalary(salary);
}