#include <fstream>
#include <iostream>
#include <string>

int errorout( const std::string errmsg )
{
	std::cerr << errmsg << std::endl;
	return 1;
}


int main(int ac, char *av[])
{
	if (ac != 4)
		return errorout("Incorrect number of arguments");

	std::fstream file;
	std::fstream new_file;
	std::string replace;
	std::string	origfile = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	file.open(origfile, std::fstream::in);
	if (file.good() == false)
		return errorout("Nonexistent file");
	new_file.open(origfile.append(".replace"), std::fstream::out);
	if (new_file.good() == false)
		return errorout("Failed to create new file");

	while (std::getline(file, replace))
	{
		if (replace == s1)
			new_file << s2 << std::endl;
		else if (replace.find(s1, 0) != std::string::npos)
		{
			for (int i = 0; i < (int)replace.length(); i++)
			{
				if (replace.compare(i, s1.length(), s1) == 0)
				{
					new_file << s2;
					i += s1.length() - 1;
					continue;
				}
				new_file << replace[i];
			}
			new_file << std::endl;
		}
		else 
			new_file << replace << std::endl;
	}

	file.close();
	new_file.close();
}