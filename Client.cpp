#include "Client.h"
#include <iostream>
#include "User.h"

using namespace std;
namespace EC
{
	Client::Client() {};
	
	Client::Client(string name, string lastName, int age, string login, string pass, Service services)
	{
		this->name = name;
		this->lastName = lastName;
		this->age = age;
		this->login = login;
		this->pass = pass;
		this->services = services;
	}

	string Client::getName()
	{
		return User::getName();
	}

	bool Client::operator<(Client& client)
	{
		return this->lastName < client.lastName;
	}

	bool Client::operator>(Client& client)
	{
		return this->lastName > client.lastName;
	}

	bool Client::operator==(Client& client)
	{
		return this->name == client.name && this->lastName == client.lastName && this->login == client.login;
	}

	bool Client::operator!=(Client& client)
	{
		return !(this->name == client.name && this->lastName == client.lastName && this->login == client.login);
	}

	ostream& operator<<(ostream& out, Client& client)
	{
		out << "Name: " << client.name << endl;
		out << "Last name: " << client.lastName << endl;
		out << "Age: " << client.age << endl;
		out << "Login: " << client.login << endl;
		out << "Auto info:\n" << client.services;

		return out;
	}

	istream& operator>>(istream& in, Client& client)
	{
		cout << "Name: ";
		in >> client.name;
		cout << "Last name: ";
		in >> client.lastName;
		cout << "Age: ";
		in >> client.age;
		cout << "Login: ";
		in >> client.login;
		cout << "Password: ";
		in >> client.pass;
		cout << "Auto info:" << endl;
		in >> client.services;

		return in;

	}
} 