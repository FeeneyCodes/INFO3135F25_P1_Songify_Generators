#include "cMusicGenerator.h"
#include "cPersonGenerator.h"
#include "cSong.h"
#include "cPerson.h"

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

#include "cSongify.h"
#include "cLogger.h"

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

void Log(std::string theText);

int SongifyTestCode_Example(void)
{

	cLogger* pLog = new cLogger("Bob Student SN:123456");
	pLog->bAddTimeToLogLines = true;



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


	// Generate some people
	std::vector<cPerson> vecPeople;
	for (unsigned int count = 0; count != 10; count++)
	{
		cPerson aPerson = pPG->generateRandomPerson(true);
		vecPeople.push_back(aPerson);
	}

	// Generate some common songs
	std::vector<cSong> vecSharedSongs;
	for ( unsigned int count = 0; count != 50; count++)
	{
		cSong aSong = pMG->getRandomSong();
		vecSharedSongs.push_back(aSong);
	}


	// Here are some suggestions for testing your library. 
	// This should give you an idea how your project will get marked. 
	// Note: This list is NOT exhaustive - the tester might test other "edge cases"


	// Instantiate the student's Songify instance
	cSongify* pSongify = new cSongify();


	// Add user, FindUser(ID), compare
	

	// Add SAME user - check return (should be false)


	// Add all users
	// GetUsers(), compare and check order (LAST name, then FIRST then reverse)
	// GetUsersByID(), compare and check order (by SongID)


	// FindUserBySIN(), compare
	// FindUserBySongifyID(), compare

	// UpdateUser() - various data, then FindUser(), compare
	// UpdateUser() INVALID user - check return

	// DeleteUser(), then GetUser() to compare
	// DeleteUser() INVALID user - check return


	// AddSong(), then FindSong(ID) and FindSong(title & artist)
	// AddSong() DUPLICATE, check return

	// UpdateSong(), then FindSong - check updates

	// Add all songs to one user, then call GetSongToPlay() on various songs
	// GetCurrentSongNumberOfPlays() check number of plays

	// UpdateRatingOnSong() for various songs SAME user
	// GetCurrentSongRating() for ONE user - check values

	// AddSongToUSerLibrary(), then GetSongToPlay() - check plays
	// DeleteSong(), then GetSongToPlay() - see if it's there

	// AddSongToUserLibrary() DUPLICATE - check return

	// Various AddSongToUerLibrary() on various users
	// Be sure to add a few shared songs

	// for list of users:
	// - Call GetSongToPlay() to update song play count
	// - Call UpdateRatingOnSong() 
	// check with DIFFERENT users - GetSongRating() and GetSongNumberOfPlays()

	// UpdateSong() - artist & title
	// - Check FindSong() shows update
	// - Check GetSongToPlay() shows update

	// DeleteSong()
	// - FindFond() and GetSongToPlay() - check that it's removed

	// RemoveSongFromLibrary() on a couple users with SHARED songs
	// - GetSongToPlay() on users that have that song - should NOT work








	delete pLog;

	delete pSongify;


	delete pPG;
	delete pMG;

	return 0;
}

void Log(std::string theText)
{
}