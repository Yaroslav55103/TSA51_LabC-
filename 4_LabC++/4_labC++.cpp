#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Number of month: ", cin >> a;
switch (a) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
    {
        int days_in_month = 31;
        cout << days_in_month << " days";
		break;
    }
	case 4:
	case 6:
	case 9:
	case 11:
    {
        int days_in_month = 30;
        cout << days_in_month << " days";
		break;
    }
	case 2:
    {
        int days_in_month = 28;
        cout << days_in_month << " days";
		break;
    }
    default:
        cout << "Wrong number of month! (1-12)";
	}
	return 0;
}
