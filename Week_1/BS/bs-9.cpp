#include <bits/stdc++.h>
using namespace std;

#define NA -1

void end(int mn[], int size)
{
int j = size - 1;
for (int i = size - 1; i >= 0; i--)
	if (mn[i] != NA)
	{
		mn[j] = mn[i];
		j--;
	}
}

int merge(int mn[], int N[], int m, int n)
{
int i = n; 
int j = 0; 
int k = 0; 
while (k < (m + n))
{
	if ((j == n)||(i < (m + n) && mn[i] <= N[j]))
	{
		mn[k] = mn[i];
		k++;
		i++;
	}
	else 
	{
	mn[k] = N[j];
	k++;
	j++;
	}
}
}

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

int main()
{
int mn[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
int N[] = {5, 7, 9, 25};
	
int n = sizeof(N) / sizeof(N[0]);
int m = sizeof(mn) / sizeof(mn[0]) - n;

end(mn, m + n);

merge(mn, N, m, n);

printArray(mn, m+n);

return 0;
}
