using namespace std;

namespace EC
{
	class MenuItem
	{
	public:
		typedef int(*function)();

		MenuItem(string str, function);

		function func;
		string itemName;

		string getName();
		void setName(string);
		int run();
	};
}