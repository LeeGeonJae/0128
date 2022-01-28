#include <iostream>
#include <vector>

using namespace std;


template<typename T>
T Add(T A, T B)
{
	return A + B;
}

template<typename T, typename Y>
T Add(T A,Y B)
{
	return A + (T)B;
}

template<typename T1, typename T2, typename T3>
T1 Add(T1 A, T2 B, T3 C)
{
	return A + B + C;
}


int main()
{
	//cout << Add<int>(2.5f , 3) << endl;

	//cout << Add<float>(2.5f, 3.0f) << endl;

	//cout << Add<float, int>(2.5f, 3) << endl;

	cout << Add<float, int, float>(3.3f, 3, 4.1f) << endl;

	return 0;
}