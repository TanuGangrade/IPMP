int AreAll9s (int num[], int n );


void generateNextPalindromeUtil (int num[], int n )
{
	int mid=n/2;
	int i=mid-1;
	bool updatecenter=false;
int j;
	if(n%2==1)//odd
	j=mid+1;
	else
	j=mid;

	while(i>=0&&num[i]==num[j])
	{i--;	j++;}

	if(i<0 ||num[i]<num[j])
	updatecenter=true;

	while(i>0)
	{
		num[j++]=num[i--];
	}

	if(updatecenter)
	{
		int carry=1;i=mid-1;
		if(n%2==1)
		{
			num[mid]+=1;
			carry=num[mid]/10;
			num[mid]%=10;
			j=mid+1;

		}
		else
		j=mid;

		while (i>=0)
		{
			num[i]+=carry;
			carry=num[mid]/10;
			num[mid]%=10;
			num[j++]=num[i--];
		}
		
	}

}


void generateNextPalindrome( int num[], int n )
{
	int i;

	printf("Next palindrome is:");

	if( AreAll9s( num, n ) )
	{
		printf( "1 ");
		for( i = 1; i < n; i++ )
			printf( "0 " );
		printf( "1" );
	}

	else
	{
		generateNextPalindromeUtil ( num, n );
		printArray (num, n);
	}
}

// A utility function to check if num has all 9s
int AreAll9s( int* num, int n )
{
	int i;
	for( i = 0; i < n; ++i )
		if( num[i] != 9 )
			return 0;
	return 1;
}
