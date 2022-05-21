#pragma once
#include <string>
class IMDBdbDetailsLoader
{
public:
	void loadMovieDetails(std::string id);
private:
	std::string ISAN_id;
};

