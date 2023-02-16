//Իրականացնել to_upper_case(string) ֆունկցիա, որը ստանում է տող (std::string), ձևափոխում և վերադարձնում է նույն տողը, որտեղ բոլոր տառերը մեծատառ են։

#include <iostream>
#include <string>

void to_upper_case (std::string st);
int main()
{
std::string to_upper_line;
std::cout << " Enter the string You want to change all the letters to upper case" << std::endl;
std::getline(std::cin, to_upper_line);
to_upper_case(to_upper_line);
return 0;

}

void  to_upper_case (std::string st)
{
	std::string test;
	
	{
	for (int i = 0; i < st.length(); i++)
	{

	  if(st[i] != ' ' && st[i] > 96 && st[i] < 123)
	  {
	   char ts = st[i] - 32;
	   test+= ts;
	  }
	  else 
	  {
		  test+=st[i];
	  }
	}
	}
	std::cout << "Displaying the resault of function " << std::endl;
	std::cout << test;
}


