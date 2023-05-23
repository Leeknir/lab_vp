#include "Service.h"
#include<iostream>

using namespace std;

namespace EC
{
	Service::Service() {}

	Service::Service(string nameService, double price, string description)
	{
		this->nameService = nameService;
		this->price = price;
		this->description = description;
	}

	ostream& operator<<(ostream& out, Service services)
	{
		out << "Name: " << services.nameService << endl;
		out << "Price: " << services.price << endl;
		out << "Description: " << services.description << endl;


		return out;
	}
	
	istream& operator>>(istream& in, Service services)
	{
		cout << "Name: ";
		in >> services.nameService;
		cout << "Price: ";
		in >> services.price;
		cout << "Description: ";
		in >> services.description;

		return in;
	}
}
