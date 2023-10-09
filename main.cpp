#include <iostream>
#include <string>
using namespace std;

class Human {
protected:
	string name;
	int age;
public:
	Human(string n, int a) {
		name = n;
		age = a;
	}
	void InputData() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
	}
	void ShowConsole() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
	string GetName(){
		return  name;
	}
	int GetAge() {
		return  age;
	}
};

class Univer
{
protected:
	string nameUN;
	string adress;
	string fucult;
public:
	Univer(string na, string ad, string fuc) {
		nameUN = na;
		adress = ad;
		fucult = fuc;
	}
	string GetName() {


		return  nameUN;
	}
	string GetAdress() {
		return  adress;
	}
	string GetFucult() {
		return  fucult;
	}
	void InputData() {
		cout << "Enter nameUN: ";
		cin >> nameUN;
		cout << "Enter address: ";
		cin >> adress;
		cout << "Enter fañulty: ";
		cin >> fucult;
	}
	void ShowConsole() {
		cout << "nameUN: " << nameUN << endl;
		cout << "adress: " << adress << endl;
		cout << "fucult: " << fucult << endl;
	}
};

class Student : public Human, public Univer
{
private:
	string group;
	int mass[3] = { '10','12','4' };
public:
	Student(string gr, string name, int age, string univer, string address, string fañulty) :Human(name, age), Univer(univer, address, fañulty)
	{
		group = gr;
	}
	void InputData() {
		cout << "Enter group: ";
		cin >> group;
	}
	void ShowConsoleALL() {
		Human::ShowConsole();
		Univer::ShowConsole();
		cout << "Group: " << nameUN << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "Ocenka: " << mass[i];
		}
	}
};
int main()
{
	Student st1("221", "Misha", 19, "ITStep", "Sadovaia, 3", "Development");
	st1.ShowConsoleALL();
}
