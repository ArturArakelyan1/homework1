//binary search algorithm

#include <iostream>

int binary_search(int arr[],int least, int most, int num);
int main ()
{
int arr[]= {1,3,5,7,9,13};
int x = 13;
int most = ((sizeof arr/sizeof arr[0]));
std::cout << binary_search(arr,0,most,x);
return 0;
}

int binary_search(int arr[],int least, int most, int num)
{
while(most>least)
{

	int mid = least +( most-least)/2;

	if (arr[mid] == num )
{	
		return mid;
}	
	else if (arr[mid] > num)
{	
		most =  mid - 1;

}	
	else if (arr[mid] < num)
{	
		least = mid + 1;
}	
}

	return 0;
}
