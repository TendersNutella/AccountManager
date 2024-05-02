#include <iostream>
#include <string>
#include <fstream>
#include "account.hpp"

int main(int agrc, char* agrv[]) {

	std::string username;
	std::string password;
	
	const std::string pastDataBase = "C:/Users/****/source/repos/Login/Login_1/dataBase.txt";
	std::ofstream dataBase(pastDataBase.c_str(), std::ios::app);
	
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

	if (dataBase) {
		dataBase << "Username : " << username << std::endl;
		dataBase << "Password : " << password << std::endl;
	}
	
	std::cout << "Account created successfully." << std::endl;

	/*AccountOne.GetPassword();
	AccountOne.GetUsername();*/

	return 0;
}
