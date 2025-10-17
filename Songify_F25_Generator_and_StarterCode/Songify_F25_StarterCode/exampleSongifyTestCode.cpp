#include "cMusicGenerator.h"
#include "cPersonGenerator.h"
#include "cSong.h"
#include "cPerson.h"

#include <string>
#include <iostream>
#include <sstream>
#include <vector>

// Michael Feeney, 2025
// mfeeney (at) fanshawec.ca
//

// Assumes you're passing 6 characters
std::string printablePostalCode(char postalCode[/*6*/]);
// Assumes you're passing 11 characters
// NOTE: Stored as NUMBERS *NOT* ASCII values (like the postal code)
std::string printablePhoneNumber(char phoneNumber[/*11*/]);
// Social Insurance Numbers
// https://en.wikipedia.org/wiki/Social_insurance_number or https://www.canada.ca/en/employment-social-development/services/sin.html
std::string printableSIN(unsigned int numSIN);



int exampleSongifyTestCode(void)
{

	cPersonGenerator* pPG = new cPersonGenerator();
	cMusicGenerator* pMG = new cMusicGenerator();

	std::string errorString;
	std::string babyNameFile = "Data/Popular Baby Names/names/yob2019.txt";
	std::string surnameFile = "Data/Surnames/names/Names_2010Census.csv";
	std::string streetNameFile = "Data/Street Names (San Francisco)/Street_Names.csv";

	std::cout << "Loading the census data...";
	if ( ! pPG->LoadCensusFiles(babyNameFile, surnameFile, streetNameFile, errorString) )
	{
		std::cout << "\nDidn't load census files becasue: " << errorString << std::endl;
		delete pPG;
		delete pMG;
		return -1;
	}
	std::cout << "done." << std::endl;


	std::cout << "Loading billboard music files...";
	std::string billboardFileName = "Data/billboard/kcmillersean-billboard-hot-100-1958-2017/data/audiio.csv";
	if ( ! pMG->LoadMusicInformation(billboardFileName, errorString) )
	{
		std::cout << "\nDidn't load music information because: " << errorString << std::endl;
		delete pPG;
		delete pMG;
		return -1;
	}
	std::cout << "done." << std::endl;


	// Generate some people
	std::vector<cPerson> vecPeople;
	for (unsigned int count = 0; count != 10; count++)
	{
		cPerson aPerson = pPG->generateRandomPerson(true);
		vecPeople.push_back(aPerson);
	}

	// Generate some common songs
	std::vector<cSong> vecSharedSongs;
	for ( unsigned int count = 0; count != 5; count++)
	{
		cSong aSong = pMG->getRandomSong();
		vecSharedSongs.push_back(aSong);
	}




	delete pPG;
	delete pMG;

	return 0;
}
