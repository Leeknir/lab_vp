#pragma once
#include <iostream>
#include "User.h"
#include "Service.h"

using namespace std;

namespace EC
{	
	class Client : public User
	{
	private:
		Service services;
	public:
		Client();
		Client(string, string, int, string, string, Service);

		string getName();

		bool operator<(Client& client);
		bool operator>(Client& client);
		bool operator==(Client& client);
		bool operator!=(Client& client);

		friend ostream& operator<<(ostream& out, Client& client);
		friend istream& operator>>(istream& in, Client& client);
	};

}