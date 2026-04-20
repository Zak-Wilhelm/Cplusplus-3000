#include <iostream>
using namespace std;

class Notification
{
public:
	virtual void sendMessage()
	{
		cout << "Sending General Notification";
	}
};

class EmailNotification : public Notification
{
public:
	void sendMessage()
	{
		cout << "Sending Email Notification";
	}
};

class SMSNotification : public Notification
{
public:
	void sendMessage()
	{
		cout << "Sending SMS Notification";
	}
};

int main()
{
	Notification *notify;
	EmailNotification email;
	SMSNotification sms;

	notify = &email;
	notify->sendMessage();

	notify = &sms;
	notify->sendMessage();

	return 0;
}