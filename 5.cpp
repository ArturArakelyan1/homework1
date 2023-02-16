//Calculator with function pointer and templets 
#include <iostream>
#include <map>

template <typename T>
	T add(T x , T y)
	{
		return x+y;
	}

template <typename T>
	T sub(T x, T y)
	{
		return x-y;
	}

template <typename T>
	T mul (T x, T y )
	{
		return x*y;
	}

template <typename T>
	T divv (T x ,T y)
	{
		return x/y;
	}
int main()
{
	double num1 = 0;
	double num2 = 0;
	char arg; 
	for(;;)
	{
		std::cout << "Enter the first number " << std::endl;
		std::cin >> num1;
		std::cout << "Enter the second number" << std::endl;
		std::cin >> num2;
		std::cout << "Pick any of + - * / to calculate" << std::endl;
		std::cin >> arg;
		if (arg == '+' || arg == '-' || arg == '*' || arg == '/')
		{
		
		
		
	std::map < char, double(*)( double , double)> My_map = 
	{
		{'+', &add},
		{'-', &sub},
		{'*', &mul},
		{'/', &divv},
	};

	double result = My_map[arg](num1,num2);
	std::cout << result << std::endl;
	break;
	}
	else 
	{
		continue;
	}
	}
	return 0;
}


