#include <array>
#include <iostream>


void printLetter(char letter, int times)
{
	for (int count{ 0 }; count < times; ++count)
	{
		std::cout << letter;
	}
}

int main()
{
	const size_t letterCount{ 26 };
	std::string letters{ "etaoinsrhldcumfpgwybvkxjqz" };
	

	int frequencies[]
	{
	 4452 ,
	 3305 ,
	 2865 ,
	 2723 ,
	 2697 ,
	 2578 ,
	 2321 ,
	 2238 ,
	 1801 ,
	 1450 ,
	 1360 ,
	 1192 ,
	  973 ,
	  895 ,
	  856 ,
	  761 ,
	  666 ,
	  597 ,
	  593 ,
	  529 ,
	  375 ,
	  193 ,
	   84 ,
	   57 ,
	   43 ,
	   32 
	};

	for (int index{ 0 }; index < letterCount; ++index)
		printLetter(letters[index], frequencies[index]);

	return 0;
}