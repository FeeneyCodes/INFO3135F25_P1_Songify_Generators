#pragma once

#include <string>
#include <vector>
#include "cPerson.h"
#include "cSong.h"

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

// Returns true if identical.
// If false, "vecDifferences" includes more information.
bool comparePeople(cPerson &A, cPerson &B, std::vector<std::string> &vecDifferences);

// Returns true if identical.
// If false, "vecDifferences" includes more information.
bool compareSongs(cSong &A, cSong &B, std::vector<std::string> &vecDifferences);
