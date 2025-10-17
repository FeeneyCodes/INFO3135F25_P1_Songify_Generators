#include <string>
#include <sstream>

#include "helperFunctions.h"

// These are just some helper functions that (hopefully)
//	help show how the data is being stored in the cPerson
//	class and how it can be printed out nicely.

// Michael Feeney, 2025
// mfeeney (at) fanshawec.ca
//


// Assumes you're passing 6 characters
std::string printablePostalCode(char postalCode[/*6*/])
{
	std::stringstream ssPostalCode;

	ssPostalCode 
		<< postalCode[0]
		<< postalCode[1]
		<< postalCode[2]
		<< ' '
		<< postalCode[3]
		<< postalCode[4]
		<< postalCode[5];

	return ssPostalCode.str();
}

// Assumes you're passing 11 characters
// NOTE: Stored as NUMBERS *NOT* ASCII values (like the postal code)
std::string printablePhoneNumber(char phoneNumber[/*11*/])
{
	std::stringstream ssPhoneNum;
	
	ssPhoneNum
		<< '+'
		<< (char)(phoneNumber[0] + '0')
		<< " ("
		<< (char)(phoneNumber[1] + '0')
		<< (char)(phoneNumber[2] + '0')
		<< (char)(phoneNumber[3] + '0')
		<< ") "
		<< (char)(phoneNumber[4] + '0')
		<< (char)(phoneNumber[5] + '0')
		<< (char)(phoneNumber[6] + '0')
		<< '-'
		<< (char)(phoneNumber[7] + '0')
		<< (char)(phoneNumber[8] + '0')
		<< (char)(phoneNumber[9] + '0')
		<< (char)(phoneNumber[10] + '0');

	return ssPhoneNum.str();
}


// Social Insurance Numbers
// https://en.wikipedia.org/wiki/Social_insurance_number or https://www.canada.ca/en/employment-social-development/services/sin.html
std::string printableSIN(unsigned int numSIN)
{
	std::stringstream ssSIN;
	ssSIN << numSIN;
	std::string sSIN = ssSIN.str();

	// pad left with '0's
	while (sSIN.length() < 9)
	{
		sSIN.insert(0, "0");
	}
	// SIN is now 9 digits with leading zeros
	sSIN.insert(3, " ");
	sSIN.insert(7, " ");

	return sSIN;
}

// Returns true if identical
// If false, "vecDifferences" includes more information.
bool comparePeople(const cPerson &A, const cPerson &B, std::vector<std::string> &vecDifferences)
{
	bool bTheyMatch = true;

	// Names match?
	if ( A.first != B.first )
	{
		vecDifferences.push_back("First names don't match.");
		bTheyMatch = false;
	}
	if ( A.middle != B.middle )
	{ 
		vecDifferences.push_back("Middle names don't match.");
		bTheyMatch = false;
	}
	if ( A.last != B.last )
	{
		vecDifferences.push_back("Last names don't match.");
		bTheyMatch = false;
	}

	// Identified gender?
	if ( A.gender != B.gender )
	{
		vecDifferences.push_back("Genders don't match.");
		bTheyMatch = false;
	}

	// Age?
	if ( A.age != B.age )
	{
		vecDifferences.push_back("Ages don't match.");
		bTheyMatch = false;
	}




	bool bTheyMatch;
}

// Returns true if identical.
// Returns true if identical.
// If false, "vecDifferences" includes more information.
bool compareSongs(cSong &A, cSong &B, std::vector<std::string> &vecDifferences)
{
	bool bTheyMatch = true;




	return bTheyMatch;
}