#include <iostream>
#include <string>
#include "account.hpp"

int main(int agrc, char* agrv[]) {

	std::string username;
	std::string password;

	std::cout << "Username : ";
	std::cin >> username;
	std::cout << "Password : ";
	std::cin >> password;

	Account AccountOne(username, password);

	if (!AccountOne.IsUsernameCorrect()) {

		return 0;
	}

	if (!AccountOne.IsPasswordCorrect()) {

		return 0;
	}

	std::cout << "Account created successfully." << std::endl;

	AccountOne.GetPassword();
	AccountOne.GetUsername();

	return 0;
}