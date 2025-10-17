# INFO3135F25_P1_Songify_Generators
For the Fall 2025 delivery of INFO-3135s Project #1


Here's a breakdown of what's here:


+ Songify_API_starter_classes [folder]
+ Songify_API_starter_classes.7z
|      (Just the class files - mostly headers)
|      (These are the same: one is a folder, one an archive)
|
+ Songify_just the DATA [folder]
+ Songify_just the DATA.7z
|      (the original data files the generator uses, in case you're interested)
|      (These are the same: one is a folder, one an archive)
|      
+ Songify_F25_Generator_and_StarterCode  [folder]
|
+--+ Songify_F25_Generator [folder with project]
   |      (Source code for data generator + data)
   |
   + Songify_F25_Generator_Library  [folder]
   |      (Same as above, packaged as a library)
   |
   + Songify_F25_StarterCode [folder]    <--- ** THE ONE YOU WANT **
          (Example starter solution, with library and data)



Songify_F25_Generator.sln opens all three of these projects.

Songify_F25_StarterCode.sln only opens the Songify_F25_StarterCode.


What do you do with all of this? 

You can copy/move the Songify_F25_StarterCode.sln and Songify_F25_StarterCode folder to another location and work with that. 

The libraries are generated from the source code in Songify_F25_Generator.
So if these are changed, you'd need to rebuild Songify_F25_Generator_Library to update the .lib files.
Then you'd need to copy the .lib files (located in the x64 folder) to the "lib" folder in Songify_F25_StarterCode.

Note that you *don't* have to include these .lib files or the generator source code, but the tool that will excercise your code will be using them. 
i.e. you could use the generators to produce some data to use any way you'd like (from a text file, etc.).




