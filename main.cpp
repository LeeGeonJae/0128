#include <iostream>
#include <vector> //STL
#include <list>
#include <deque>

using namespace std;

int main()
{
	vector<int> Data;

	for (int i = 1; i <= 100; ++i)
	{
		Data.push_back(i);
	}

	//for (int i = 3; i <= 100; i += 3)
	//{
	//	Data.erase(find(Data.begin(), Data.end(), i));
	//}

	//for (auto iter = Data.begin(); iter != Data.end(); ++iter)
	//{
	//	if (*iter % 3 == 0)
	//	{
	//		iter = Data.erase(iter);
	//	}
	//}

	Data.clear();

	for (auto iter = Data.begin(); iter != Data.end(); ++iter)
	{
		if ((*iter % 10) % 3 == 0)
		{
			iter = Data.erase(iter);
		}
	}


	for (auto iter = Data.rbegin(); iter != Data.rend(); ++iter)
	{
		cout << *iter << ", ";
	}

	return 0;
}