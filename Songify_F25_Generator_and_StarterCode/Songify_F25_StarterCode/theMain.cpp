#include "cMusicGenerator.h"
#include "cPersonGenerator.h"
#include "cSong.h"
#include "cPerson.h"

#include <string>
#include <iostream>
#include <sstream>

// Michael Feeney, 2025
// mfeeney (at) fanshawec.ca
//



int testTheDataGenerationLibrary(void);

int SongifyTestCode_Example(void);


int main(int argc, char* argv[])
{

	// Here's a quick-n-dirty example of how the testing-exercising
	//	code might call your code.
	SongifyTestCode_Example();


	// Here's an example of how to use the data generation library
	//	+IF+ you want it inside your code.
	// 
	// You also have to update the Project settings (right-click on the project):
	// 
	// VC++ Directories
	// - Library Directories: "$(ProjectDir)lib\Release_x64"
	// Linker
	// - Input
	//   - Additional Dependencies: Songify_F25_Generator_Library.lib
	// 
	// If you DON'T want the data generator libraries, you don't 
	//	have to change anything in your project. 
	testTheDataGenerationLibrary();


	return 0;
}

