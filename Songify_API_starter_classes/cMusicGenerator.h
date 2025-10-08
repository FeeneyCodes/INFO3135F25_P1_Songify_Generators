#ifndef _cMusicGenerator_HG_
#define _cMusicGenerator_HG_

#include "cSong.h"

class cMusicGenerator
{
public:
	cMusicGenerator();
	~cMusicGenerator();

	bool LoadMusicInformation(std::string musicFileName, std::string& errorString);

	// Picks a random song from the billboard100 file
	cSong getRandomSong(void);
	// Makes up a random song (picks random artist + title, etc.)
	// (i.e. the song doesn't exist)
	cSong getRandomMadeUpSong(void);
	
	// Returns false if song isn't found.
	// This must be an EXACT MATCH for what's in the billboard100 file. 
	// So case sensitive, etc. 
	bool findSong(std::string songName, std::string artist, cSong& foundSong);
};

#endif
