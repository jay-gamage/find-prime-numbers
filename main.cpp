// The program finds the number of prime numbers within an entered value

#include <iostream>
using namespace std;

bool IsPrime(unsigned long long Tested, unsigned long long *Store, int Len);

int main()
{
	int N;
	cout << "How many prime numbers should I find \nN=";
	cin >> N;
	unsigned long long *PrimeStore;
	PrimeStore = new unsigned long long[N];
	unsigned long long Tested = 1;

	cout << "We found prime numbers:" << endl;
	
	for (int count = 0; count < N; count++)
	{
		while (!IsPrime(++Tested, PrimeStore, count));
		PrimeStore[count] = Tested;
		cout << count << '\t' << PrimeStore[count] << endl;
	}

	delete[] PrimeStore;
	PrimeStore = nullptr;
}

bool IsPrime(unsigned long long Tested, unsigned long long *Store, int Len)
{
	for (int k=0; k <Len; k++)
	{
		if (Tested % Store[k]==0)
			return false;
	}
	return true;
}
