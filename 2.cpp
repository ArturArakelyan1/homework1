//function that  print the count of number's 1 and 0 

#include <iostream>

static int bitt = (sizeof (int) * 8);
int onecount(int num);//prototype

int main(){

	int ret = 0;
    unsigned int one_zero ;
    std::cout<< "Enter the number  "	<<"\n";
    std::cin>>one_zero;
	ret = onecount(one_zero);

}

int onecount(int num)
{
	bool flag = 0;
    int  onecount =0;
	int  zerocount = 0;
    for(int i = 0; i<bitt; i++)
    {
        flag =( num & (1<<i));
        if(flag == 1)
        {
            onecount++;
        }
		else 
		{
			zerocount++;
		}
	 
	}
			std::cout<< "The count of one is " <<   onecount << "\n";
			std::cout<< "The count of zero is " <<  zerocount << "\n";

    return 0 ;
  
    
}

