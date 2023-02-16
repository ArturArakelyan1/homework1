//function that return true if number's least significant and most significant bits has the same valu 

#include <iostream>
static int least = 0;
static int most = 31;
int equal (int num);


int main()
{

unsigned int numb = 0;
int res = 0;
std::cout << "Enter the number"<<"\n";
std::cin >> numb;
res = equal(numb);
return 0;
}		

	int equal (int num)
	{	

		bool flag = 0; 
		flag = ~ ( ( num & (1 << least) ) ^ ( num & (1 << most) ) );
		std::cout << std::boolalpha <<flag;
		return 0;
	}
