#include "account.hpp"

//Vericifation that the username enter by the client is correct or not
bool Account::IsUsernameCorrect()
{
	const int arraySize = 4;
	int array[arraySize];

	bool testCharactere = true;

	array[0] = '!';
	array[1] = '*';
	array[2] = '_';
	array[3] = '@';

	for (int i = 0; i < m_username.size(); ++i)
	{

		if (m_username[i] == array[0])
		{
			testCharactere = false;
		}

		if (m_username[i] == array[1])
		{
			testCharactere = false;
		}

		if (m_username[i] == array[2])
		{
			testCharactere = false;
		}

		if (m_username[i] == array[3])
		{
			testCharactere = false;
		}
	}

	if(m_username.size() >= 25) {

		std::cout << "Your username is too long, make it shorter" << std::endl;
		return false;
	}
	
	if (!testCharactere)
	{
		std::cout << "You have some special charactere in your username, remove them." << std::endl;
		return false;
	}

	return true;
}

//Verification that the password enter by the client is correct or not
bool Account::IsPasswordCorrect()
{
	const int arraySize = 4;
	int array[arraySize];

	bool testCharactere = false;

	array[0] = '!';
	array[1] = '*';
	array[2] = '_';
	array[3] = '@';

	for (int i = 0; i < m_password.size(); ++i)
	{

		if (m_password[i] == array[0])
		{
			//std::cout << "Caractere special detecte : " << password[i] << std::endl;
			testCharactere = true;
		}

		if (m_password[i] == array[1])
		{
			//std::cout << "Caractere special detecte : " << password[i] << std::endl;
			testCharactere = true;
		}

		if (m_password[i] == array[2])
		{
			//std::cout << "Caractere special detecte : " << password[i] << std::endl;
			testCharactere = true;
		}

		if (m_password[i] == array[3])
		{
			//std::cout << "Caractere special detecte : " << password[i] << std::endl;
			testCharactere = true;
		}
	}

	if (m_password.size() < 12)
	{
		std::cout << "Your password is too short, make it longer." << std::endl;
		return false;
	}

	if (!testCharactere)
	{
		std::cout << "Your password miss some special charactere." << std::endl;
		return false;
		return 0;
	}
	
	return true;

}

//Get username
void Account::GetUsername()
{
	std::cout << "The user identifiant is : " << m_username << std::endl;
}

//Get password
void Account::GetPassword()
{
	std::cout << "The user password is : " << m_password << std::endl;
}



//Accout by default
Account::Account(std::string username, std::string password)
	:m_username(username)//Load the instruction by the input
	,m_password(password)//Load the instruction by the input
{

}

//Confirmation that the destructor has been called by the compilator
Account::~Account()
{
	std::cout << "Destructor has been called." << std::endl;
}