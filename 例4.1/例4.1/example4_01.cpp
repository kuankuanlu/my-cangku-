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
	cout << "学生的总数是：" << Student::total << endl;
	Student *p = new Student(13);
	cout << "学生的总数是：" << Student::total << endl;
	cout << "学生的总数是：" << p->total << endl;
	delete p;
	cout << "学生的总数是：" << Student::total << endl;
	Student s[2];
	cout << "学生的总数是：" << s[0].total << endl;
	cout << "学生的总数是：" << s[1].total << endl;
	system ("pause");
	return 0;
}