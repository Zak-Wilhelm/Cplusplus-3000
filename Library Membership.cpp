#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string person_name;
};

class Member : public Person
{
public:
	int member_id;
};

class PremiumMember : public Member
{
public:
	int books_borrowed;

	void books_allowed(int books_borrowed)
	{
		if (books_borrowed > 10)
		{
			cout << "Status: Over the Limit" << endl;
		}
		else
		{
			cout << "Books Borrowed: " << books_borrowed << endl;
			cout << "Status: Within Limit" << endl;
		}
	}
};

int main()
{
	PremiumMember premem1;

	premem1.person_name = "David";
	premem1.member_id = 301;
	premem1.books_borrowed = 8;

	cout << "Name: " << premem1.person_name << endl;
	cout << "Member ID: " << premem1.member_id << endl;
	premem1.books_allowed(premem1.books_borrowed);
	
	return 0;
}