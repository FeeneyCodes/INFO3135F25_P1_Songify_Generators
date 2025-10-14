There is a 'pre-build' step that copies the header and data files from the 
other projects in the solution into this starter code project folder.

You can find that setting under:
- Project properties (right-click on the project)
- "Build Events"
- "Pre-Build Events" 
    - Command line: "CopyLibraryAndHeaderFiles.bat"
	
If this project is part of the larger solution, 
it will copy the headers and data files. 
If it's not, then it doesn't do anything.


What you need to do:

Basically, you implement the code in the Songify.cpp file.
Note: You DON'T have to have everything in one file. 
(In fact, that's pretty rare)

To test YOUR code, your instructor will 
replace your Songify.h and .cpp (and any other files,
like if you have separate data structure files, etc.)
into a project like this one, then compile and run it.

Their testing code will use create an instance of your
Songify class, the use the data generation code/library
to load a bunch of test data, then excercise ("call") the 
various methods on your Songify class doing various
typical things like: adding/deleting/updating users, 
adding/deleting/updating songs, "playing" songs, getting
user's playlists, etc. 
It will compare what it is expecting with what your code 
actually generated and use that as a basis for your marks. 
