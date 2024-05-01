#include <iostream>
#include <vector>
#include <string>

void DisplayArray(std::string array[], int size) {

	for (int i = 0; i < size; ++i) {

		std::cout << array[i] << std::endl;
	}
}

int main(int agrc, char* agrv[]) {
	
	const int size = 1;

	std::string username;
	std::string password;

	std::string usernameDataBase[size];
	std::string passwordDataBase[size];

	std::cout << "Username :";
	std::cin >> username;

	std::cout << "Password :";
	std::cin >> password;

	usernameDataBase[0] = username;
	passwordDataBase[0] = password;

	DisplayArray(usernameDataBase, size);
	DisplayArray(passwordDataBase, size);

	return 0;
}