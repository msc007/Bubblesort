
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

/* BIG-O (n^2) Bubble Sort
   bubble up: each itereation compare num[i] > num[i+1]
*/
int main()
{
	vector<int> num{ 4,3,2,6,1,7 };
	vector<int>::iterator i;

	for (int pass = 1; pass < num.size(); pass++)
	{
		for (unsigned int i = 0; i < num.size() - 1; i++)
		{
			if (num[i] > num[i + 1]) {
				int temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}

	string s;
	cin >> s;

    return 0;
}

