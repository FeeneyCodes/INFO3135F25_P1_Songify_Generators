@if not exist "..\Songify_F25_Generator_Library\Songify_F25_Generator_Library.vcxproj" goto no_lib_project
@echo Copying the souce files from the Songify_F25_Generator project...
xcopy "..\Songify_F25_Generator_Library\cMusicGenerator.h" "*.*" /y /z /v
xcopy "..\Songify_F25_Generator_Library\cPersonGenerator.h" "*.*" /y /z /v
xcopy "..\Songify_F25_Generator_Library\cCallbackProgress.h" "*.*" /y /z /v
xcopy "..\Songify_F25_Generator_Library\cPerson.cpp" "*.*" /y /z /v
xcopy "..\Songify_F25_Generator_Library\cPerson.h" "*.*" /y /z /v
xcopy "..\Songify_F25_Generator_Library\cSong.h" "*.*" /y /z /v
xcopy "..\x64\Debug\Songify_F25_Generator_Library.lib" "lib\Debug_x64\*.*" /y /z /v
xcopy "..\x64\Release\Songify_F25_Generator_Library.lib" "lib\Release_x64\*.*" /y /z /v
@goto copy_data_files
:no_lib_project
@echo Didn't find the Songify_F25_Generator_Library project, so nothing was copied.
@REM now the data files
:copy_data_files
@if not exist "..\Songify_F25_Generator\Data\Street Names (San Francisco)\Street_Names.csv" goto no_data_files
xcopy "..\Songify_F25_Generator\Data\*.*" "Data\*.*" /y /z /s /e /g /h /j
@goto all_done
:no_data_files
@echo Didn't find the Songify_F25_Generator_Library project data, so nothing was copied.
:all_done
@echo All done.
@REM pause



