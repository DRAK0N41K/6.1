#include <iostream>
#include <windows.h>
#include <iomanip>
#include <time.h>
using namespace std;
int p[25];
int randCatch;
int counter;
int summ;
int Low = 15;
int Max = 94;
int main()
{
	srand((unsigned)time(NULL));
	for (int j = 0;j < 25;j++)
	{

		/*randCatch = (15 + rand() % 80);*/
		p[j] = Low + rand() % (Max - Low + 1);
		
	}
	for (int i = 0; i <= 24; ++i)
		cout << p[i] << ", ";
	for (int j = 0; j < 25 ; j++)
	{
		if ((j == 13) && (p[j]%2==0))
		{
			
		} else
		{
			summ += p[j];
			p[j] = 0;
		}
	}
	cout << endl;
	for (int i = 0; i <= 24; ++i)
		cout << p[i] << ", ";
	cout << endl;
	cout << summ;
}

