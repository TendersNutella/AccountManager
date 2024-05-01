#include <iostream>

//Programme qui détécte un caractère spécial 

int main(int agrc, char* agrv[]) {
	
	std::string username = "Abdou_laye!";
	const int arraySize = 3;
	int array[arraySize];

	array[0] = '!';
	array[1] = '*';
	array[2] = '_';

	for (int i = 0; i < username.size(); ++i)
	{

		if (username[i] == array[0])
		{
			std::cout << "Caractere special detecte : " << username[i] << std::endl;
		}

		if (username[i] == array[1])
		{
			std::cout << "Caractere special detecte : " << username[i] << std::endl;
		}

		if (username[i] == array[2])
		{
			std::cout << "Caractere special detecte : " << username[i] << std::endl;
		}
	}

	return 0;
} 