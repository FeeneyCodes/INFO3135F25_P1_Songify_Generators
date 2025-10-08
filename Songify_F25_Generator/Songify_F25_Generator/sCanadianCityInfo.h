#ifndef _sCanadianCityInfo_HG_
#define _sCanadianCityInfo_HG_

#include <string>

struct sCanadianCityInfo
{
	std::string name;
	std::string province;
	unsigned long population = 0;
	unsigned long cumulative_population = 0;
};



#endif

