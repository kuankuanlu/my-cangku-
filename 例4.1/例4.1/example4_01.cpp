#include<iostream>
#pragma warning(disable:4996)
using namespace std;
class Student
{
private:
	int num;
	char name[20];
	
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p="wang");
	void GetName();
	int Getnum();


};
int Student::total;
Student::Student(int n, char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
int main()
{
	cout << "ѧ���������ǣ�" << Student::total << endl;
	Student *p = new Student(13);
	cout << "ѧ���������ǣ�" << Student::total << endl;
	cout << "ѧ���������ǣ�" << p->total << endl;
	delete p;
	cout << "ѧ���������ǣ�" << Student::total << endl;
	Student s[2];
	cout << "ѧ���������ǣ�" << s[0].total << endl;
	cout << "ѧ���������ǣ�" << s[1].total << endl;
	system ("pause");
	return 0;
}