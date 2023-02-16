//Գտնել զանգվածի այն տարրերի քանակը, որոնք անմնացորդ բաժանվում են իրենց կարգահամարի (index) վրա։

#include <iostream>
int arr_num (int arr[],int size);
const int size = 8;

int main ()
{
int test[size] = {1,2,4,5,7,8,12,14};
int count = arr_num(test,size);
std::cout << count << std::endl;

return 0;
}

int arr_num (int arr[],int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if ((i != 0) && (arr[i] % i == 0)) 
		{
			count ++;
		}
	}

	return count; 
} 
