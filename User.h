#pragma once
#include <iostream>

using namespace std;

namespace EC {
	
	
	class User

	{	
	protected:
		string name;
		string lastName;
		int age;
		string login;
		string pass;
		

	public:
		
		virtual string getName() = 0;
		
	};

}