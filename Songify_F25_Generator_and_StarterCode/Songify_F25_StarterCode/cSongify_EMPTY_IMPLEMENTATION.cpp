#include "cSongify.h"

// Michael Feeney, 2025
// mfeeney (at) fanshawec.ca
//

cSongify::cSongify()
{
}

cSongify::~cSongify()
{
}

bool cSongify::AddUser(cPerson newPerson, std::string& errorString)
{

	return true;
}

// Returns false if not found
bool cSongify::FindUser(unsigned int SongifyID, cPerson& foundPerson)
{

	return true;
}

// Returns false if not found OR there's more than one user (which shouldn't happen, anyway...)
bool cSongify::FindUserBySIN(unsigned int SIN, cPerson& foundPerson)
{

	return true;
}

bool cSongify::FindUserBySongifyID(unsigned int SongifyID, cPerson& foundPerson)
{

	return true;
}


// This will ++OVERWRITE++ the data contained in user 
// 
// The idea is that you'd call "FindUser" then change just what needs to be
//	changed, then call this method - thereby updating what got 
// 
// NOTE: It "finds" the user by matching BOTH the "unique Songify ID" AND the "SIN" 
//        (Social Insurance Number)
// So if either of these DON'T match (or aren't found) then it reutrns false. 
// 
// Returns false if it can't find the person
bool cSongify::UpdateUser(cPerson& thePerson, std::string& errorString)
{

	return true;
}

// Returns false if it can't find the person
bool cSongify::DeleteUser(unsigned int SongifyUserID, std::string& errorString)
{

	return true;
}


// Returns false if these don't work
// 
// ---------------------------------------------------------------------
// This returns a ++COPY++ of the users library. 
// The CALLER will delete this data when done using it.
// i.e. you will have to allocate and copy the library into this array 
// ---------------------------------------------------------------------
// 
// See the cSongify.cpp file for more infomration on how this is supposed to work
// 
// It will return false if it can't find that user
// This returns a COPY of the users library, in the form of a regular dynamic array.
bool cSongify::GetUsersSongLibrary(unsigned int snotifyUserID, cSong*& pLibraryArray, unsigned int& sizeOfLibary)
{
	// The caller would do something like this (assume the user ID = 28472382)
	//
	//	cSong* pTheSongs = 0;
	//	unsigned int arraySize = 0;
	//	GetUsersSongLibrary( 28472382, pTheSongs, arraySize );
	// 
	// Inside this method, you'd do something like this:

	// TODO: Find that user... 

	// Alloate a heap based array to hold all the songs...

//	sizeOfLibary = WhateverYouHaveToDoToGetThisValue();
//	pCopyOfLibrary = new cSong[sizeOfLibary];

	// The array and the size of the array are "returned" by reference to the caller. 

	// TODO: Copy all the songs over

	return true;
}

// Song array is sorted by this user's rating, from HIGHEST to lowest
bool cSongify::GetUsersSongLibraryAscendingBySongRating(unsigned int songifyUserID, cSong*& pLibraryArray, unsigned int& sizeOfLibary)
{

	return true;
}

// Song array is sorted by HIGHEST number of plays to lowest
bool cSongify::GetUsersSongLibraryAscendingByNumberOfPlays(unsigned int songifyUserID, cSong*& pLibraryArray, unsigned int& sizeOfLibary)

{

	return true;
}

// If sortAscending = true, then returns ascending sort by LAST then FIRST names
// (false returns descending)
bool cSongify::GetUsers(cPerson*& pAllTheUsers, unsigned int& sizeOfUserArray, bool sortAscending)
{

	return true;
}

// Sorded ASCENDING by Songify ID
bool cSongify::GetUsersByID(cPerson*& pAllTheUsers, unsigned int& sizeOfUserArray)
{

	return true;
}


// If an identical song is added, it's ignored.
bool cSongify::AddSong(cSong newSong, std::string& errorString)
{

	return true;
}

// This finds a match, based on the "unique ID", and overwrites the data. 
bool cSongify::UpdateSong(cSong theSong, std::string& errorString)
{

	return true;
}

// ************************************************************************
// NOTE: Deleting the song deletes it from ALL users that have this song!!!
// ************************************************************************
bool cSongify::DeleteSong(unsigned int UniqueSongID, std::string& errorString)
{

	return true;
}

// This associates a particular song with a particular user. 
// (Note: returns true if the song is already there)
bool cSongify::AddSongToUserLibrary(unsigned int songifyUserID, unsigned int UniqueSongID, std::string& errorString)
{

	return true;
}

bool RemoveSongFromUserLibrary(unsigned int songifyUserID, unsigned int SongifySongID, std::string& errorString)
{

	return true;
}

// Note: this is unique TO THE USER, not the entire Songify system.
// i.e. each user has a different rating for each song.
bool cSongify::UpdateRatingOnSong(unsigned int SongifyUserID, unsigned int songUniqueID, unsigned int newRating)
{

	return true;
}

// Returns false if it can't find the song.
// (Can return optional information on errorString)
// 
// ****************************************************************************
// NOTE: This updates the "numberOfTimesPlayed" in THIS USER'S playlist-library
// ****************************************************************************
bool cSongify::GetSongToPlay(unsigned int SongifyUserID, unsigned int songUniqueID, cSong& foundSong, std::string& errorString)
{

	return true;
}
	
// Note that the songRating is "returned" by reference. 
// If it can't find a match (i.e. returns false), then the rating isn't valid. 
bool cSongify::GetCurrentSongRating(unsigned int songifyUserID, unsigned int songUniqueID, unsigned int &songRating)
{

	return true;
}

bool cSongify::GetCurrentSongNumberOfPlays(unsigned int songifyUserID, unsigned int songUniqueID, unsigned int &numberOfPlays)
{

	return true;
}


// This isn't tied to a particular user, so doesn't update any stats
// (You can also assume that with duplicates, it will return the 1st one it finds. I don't care which.)
bool cSongify::FindSong(std::string title, std::string artist, cSong& foundSong)
{

	return true;
}

bool cSongify::FindSong(unsigned int uniqueID, cSong& foundSong)
{

	return true;
}



