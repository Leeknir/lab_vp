#pragma once
#include <iostream>

using namespace std;

namespace EC
{
	class Service {
	private:
		string nameService;
		double price;
		string description;
		

	public:
		Service();
		Service(string, double, string);

		friend ostream& operator<<(ostream& out, Service services);
		friend istream& operator>>(istream& in, Service services);

	};
	


}