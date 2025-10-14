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

int exampleSongifyTestCode(void);


int main(int argc, char* argv[])
{

	// Here's an example of how to use the data generation library
	//	+IF+ you want it inside your code.
	// 
	// You also have to update the Project settings (right-click on the porject):
	// 
	// VC++ Directories
	// - Library Directories: "$(ProjectDir)lib\Release_x64"
	// Linker
	// - Input
	//   - Additional Dependancies: Songify_F25_Generator_Library.lib
	// 
	// If you DON'T want the data generator libraries, you don't 
	//	have to change anything in your project. 
	testTheDataGenerationLibrary();


	// Here's a quick-n-dirty example of how the testing-excercising
	//	code might call your code.
	exampleSongifyTestCode();


	return 0;
}

