#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "the number of arguments is wrong." << std::endl <<"Sample: ./sad dosya.txt ayse 123 " << std::endl;
        return 1;
    }
    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream inputFile(fileName);
    if (!inputFile.is_open())
    {
        std::cerr << "error: failed to open file " << std::endl;
        return 1;
    }

    std::ofstream outputfile(fileName + ".replace");
    if(!outputfile.is_open())
    {
        std::cerr << "no new file opened" << std::endl;
        return 1;
    }

    std::string line;
    size_t pos;
    int s1Len = s1.length();
    int s2Len = s2.length();

    while(std::getline(inputFile, line))
    {
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1Len);
            line.insert(pos, s2);
            pos = pos + s2Len;
        }
        outputfile << line << std::endl;
        pos = 0;
    }

    inputFile.close();
    outputfile.close();

    return 0;
}
