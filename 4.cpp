#include <iostream>
#include <string>

void reverse_string ( char* st );

int main()
{

char str[] = "Hello world";
reverse_string (str);
std::cout << " The result is \n" << str <<std::endl;

return 0;
}

void reverse_string ( char* st )
 
 {
int length = strlen(st);
char* start = st;
char* end = length + st - 1;

while (start<end)
{
	char mid = *start;
	*start = *end;
	*end = mid ;

	start++;
	end--;
}
}



