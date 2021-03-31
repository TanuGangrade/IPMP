void mergeSortITERATUVE(int arr[],int n)
{
   	   int curr, left,right;
		for(curr=0;curr<n;curr++)
		{
			for(left=0;left<n-1;left+=curr*2)
			{
				mid=min(left+curr-1,n-1);
				right=min(left+curr*2-1,n-1);
				merge(arr,left,mid,right);
				
			}
		}
	
}
