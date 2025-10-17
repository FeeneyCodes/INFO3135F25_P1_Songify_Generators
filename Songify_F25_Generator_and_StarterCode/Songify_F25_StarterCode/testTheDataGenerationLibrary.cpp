#include "cMusicGenerator.h"
#include "cPersonGenerator.h"
#include "cSong.h"
#include "cPerson.h"

#include <string>
#include <iostream>
#include <sstream>

#include "helperFunctions.h"

// Michael Feeney, 2025
// mfeeney (at) fanshawec.ca
//


int testTheDataGenerationLibrary(void)
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
		std::cout << "\nDidn't load census files because: " << errorString << std::endl;
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



	
	
	
	
	
	
	// Ten randomly chosen songs:
	std::cout << "10 randomly picked songs:" << std::endl;
	for (unsigned int count = 0; count != 10; count++ )
	{ 
		cSong aSong = pMG->getRandomSong();
		std::cout
			<< "ID: [" << aSong.getUniqueID() << "] "
			<< aSong.name << " "
			<< "by: " << aSong.artist << std::endl;
	}

	std::cout << std::endl;
	std::cout << "10 randomly made up songs:" << std::endl;
	for (unsigned int count = 0; count != 10; count++)
	{
		cSong aSong = pMG->getRandomMadeUpSong();
		std::cout
			<< "ID: [" << aSong.getUniqueID() << "] "
			<< aSong.name << " "
			<< "by: " << aSong.artist << std::endl;
	}

	// Find song
	std::cout << std::endl;

	std::vector<cSong> vecFoundSongs;

	// Return all the songs currently present (including made up ones)
	pMG->findSong("", "", vecFoundSongs, false);

	std::cout << "Currently " << vecFoundSongs.size() << " songs in generator" << std::endl;


	vecFoundSongs.clear();
	pMG->findSong("", "Taylor Swift", vecFoundSongs, false);
	std::cout << "Currently " << vecFoundSongs.size() << " songs by \'Taylor Swift\'" << std::endl;

	vecFoundSongs.clear();
	pMG->findSong("", "Taylor Swift", vecFoundSongs, true);
	std::cout << "Currently " << vecFoundSongs.size() << " songs by \'Taylor Swift\' (search is NOT case sensitive)" << std::endl;


//	if (pMG->findSong("Shake it off", "Taylor Swift", vecFoundSongs))
	if (pMG->findSong("Afterglow", "Taylor Swift", vecFoundSongs))
	{
		std::cout << "Found " << vecFoundSongs.size() << " match(es)!" << std::endl;

		for ( cSong &songMatch : vecFoundSongs)
		std::cout
			<< "[" << songMatch.name << "]"
			<< " by "
			<< "[" << songMatch.artist << "]"
			<< " uniqueID: " << songMatch.getUniqueID()
			<< std::endl;
	}
	else
	{
		std::cout << "Sorry, didn't find a match for that song." << std::endl;
	}




	std::cout << "Generating some random people:" << std::endl;
	std::cout << std::endl;

	for (unsigned int count = 0; count != 10; count++)
	{
		cPerson aPerson = pPG->generateRandomPerson(true);

		std::cout
			<< aPerson.first << " "
			<< aPerson.last
			<< ", age: " << aPerson.age
			<< ", identifies as: " << aPerson.getGenderAsString() << std::endl
			<< "primary phone# : " << printablePhoneNumber(aPerson.phoneNumbers[0]) << std::endl
			<< "Address:" << std::endl
			<< aPerson.streetNumber << " "
			<< aPerson.streetName << " "
			<< aPerson.streetType << " "
			<< aPerson.streetDirection << std::endl
			<< aPerson.city << ", " << aPerson.province << std::endl
			<< printablePostalCode(aPerson.postalCode) << std::endl
			<< std::endl;
	}



	delete pMG;
	delete pPG;


	return 0;
}


