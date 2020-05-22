#include <iostream>

using namespace std; 

void Sort(int, int);
void Show();
const int a = 5;

int tab[a] = { 5, 60, 10, 40, 3 };

int main()
{
	Sort(0, a - 1);
	Show();
}


void Sort(int left, int right)
{
	int i, j, t, pivot;
	
	i = (left + right) / 2;

	pivot = tab[i];
	tab[i] = tab[right];

	for (j = i = left; i < right; i++)
	{
		if (tab[i] < pivot)
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
				j++;
			}
	}
		tab[right] = tab[j];
		tab[j] = pivot;

		if (left < j - 1)
			Sort(left, j - 1);
		if (j + 1 < right)
			Sort(j + 1, right);
					
}

void Show()
{
	for (int i = 0; i < a; i++)
	{
		cout << i + 1 << ". = " << tab[i] << endl;
	}
}

