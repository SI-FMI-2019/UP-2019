#include <iostream>
using namespace std;

int main()
{
	enum Days
	{
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};

	Days current_day;
	int input_day;
	cin >> input_day;

	current_day = (Days)input_day;

	switch (current_day)
	{
	case Monday:
		cout << "It's Monday :(\n";
		break;
	case Friday:
		cout << "It's Friday :)\n";
		break;
	default:
		cout << "Some other day that is not relevant !\n";
		break;
	}
	return 0;
}