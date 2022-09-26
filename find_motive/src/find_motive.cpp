#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	std::fstream  file;
	std::string word, filename, pattern;
  	int occurence = 0;
	filename = argv[1];
  	pattern = argv[2];
	file.open(filename.c_str());
	if (!file){
		std::cout << "The file " << filename << " could not be opened.\n" ;
		return 1;
	}
	while (file >> word)
	{
		if (word.compare(pattern) == 0)
			occurence++;
	}
	std::cout << "The file " << filename << " contains " << occurence << " words containing the motive " << pattern << std::endl;
	return 0;
}
