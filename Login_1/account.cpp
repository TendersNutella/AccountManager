#include "account.hpp"

//Vericifation that the username enter by the client is correct or not
bool Account::IsUsernameCorrect()
{
	const int arraySize = 4;
	char array[arraySize];
	const int numberSize = 11;
	char numberArray[numberSize];

	bool testCharactere = true;
	bool testNumber = true;

	array[0] = '!';
	array[1] = '*';
	array[2] = '_';
	array[3] = '@';

	numberArray[0] = '0';
	numberArray[1] = '1';
	numberArray[2] = '2';
	numberArray[3] = '3';
	numberArray[4] = '4';
	numberArray[5] = '5';
	numberArray[6] = '6';
	numberArray[7] = '7';
	numberArray[8] = '8';
	numberArray[9] = '9';
	numberArray[10] = '10';

	for (int i = 0; i < m_username.size(); ++i)
	{

		if (m_username[i] == array[0]){
			testCharactere = false;
		}
		else if (m_username[i] == array[1]){
			testCharactere = false;
		}
		else if (m_username[i] == array[2]){
			testCharactere = false;
		}
		else if (m_username[i] == array[3]){
			testCharactere = false;
		}


		if (m_username[i] == numberArray[0]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[1]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[2]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[3]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[4]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[5]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[6]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[7]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[8]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[9]) {
			testNumber = false;
		}
		else if (m_username[i] == numberArray[10]) {
			testNumber = false;
		}

	}

	if(m_username.size() >= 25) {

		std::cout << "Your username is too long, make it shorter." << std::endl;
		return false;
	}
	
	if (!testCharactere)
	{
		std::cout << "You have a special charactere in your username." << std::endl;
		return false;
	}

	if (!testNumber)
	{
		std::cout << "You have a number in your username." << std::endl;
		return false;
	}

	return true;
}

//Verification that the password enter by the client is correct or not
bool Account::IsPasswordCorrect()
{
	const int arraySize =  4;
	char array[arraySize];
	const int numberSize = 11;
	char numberArray[numberSize];

	bool testCharactere = false;
	bool testNumber = false;

	array[0] = '!';
	array[1] = '*';
	array[2] = '_';
	array[3] = '@';

	numberArray[0] = '0';
	numberArray[1] = '1';
	numberArray[2] = '2';
	numberArray[3] = '3';
	numberArray[4] = '4';
	numberArray[5] = '5';
	numberArray[6] = '6';
	numberArray[7] = '7';
	numberArray[8] = '8';
	numberArray[9] = '9';
	numberArray[10] = '10';

	for (int i = 0; i < m_password.size(); ++i)
	{

		if (m_password[i] == array[0]){
			testCharactere = true;
		}
		else if (m_password[i] == array[1]){
			testCharactere = true;
		}
		else if (m_password[i] == array[2]){
			testCharactere = true;
		}
		else if (m_password[i] == array[3]){
			testCharactere = true;
		}
		else if (m_password[i] == numberArray[0]){
			testNumber = true;
		}


		if (m_password[i] == numberArray[0]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[1]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[2]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[3]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[4]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[5]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[6]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[7]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[8]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[9]) {
			testNumber = true;
		}
		else if (m_password[i] == numberArray[10]) {
			testNumber = true;
		}
	}

	if (m_password.size() < 12)
	{
		std::cout << "Your password is too short, make it longer." << std::endl;
		return false;
	}

	if (!testCharactere)
	{
		std::cout << "Your password miss a special charactere." << std::endl;
		return false;
	}

	if (!testNumber)
	{
		std::cout << "Your password miss a number" << std::endl;
		return false;
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
