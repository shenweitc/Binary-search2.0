#define _CRT_SECURE_NO_WARNINGS 1
//写一个代码，在arr数组中找7
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
	int mid=(left+right)/2;
	if(arr[mid]>k)
	{
	right=mid-1;
	}
	else if(arr[mid]<k)
	{
	left=mid+1;
	}
	else
	{
	printf("找到了，下标是:%d\n",mid);
	break;
	}
	}
return 0;
}