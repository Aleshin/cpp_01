#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char **argv)
{
	std::string filename, s1, s2;

	if (argc != 4)
	{
		std::cerr << "You need to provide three arguments: filename, string1, string2" << std::endl;
		return 1;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
    {
        std::cerr << "Error: string1 (s1) must not be empty." << std::endl;
        return 1;
    }

    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: could not create output file." << std::endl;
        infile.close();
        return 1;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();
	return 0;
}