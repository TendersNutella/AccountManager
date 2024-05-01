//The file is call only one time or somethings like I don't remember to be honest but that important I guess
#pragma once

#include <iostream>
#include <string>

struct Account {
	
	//Constructor
	Account(std::string username, std::string password);
	//Destructor
	~Account();

	bool IsUsernameCorrect();
	bool IsPasswordCorrect();
	void GetUsername();
	void GetPassword();

	std::string m_username;
	std::string m_password;
};