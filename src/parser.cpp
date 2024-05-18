/*
 * Emmett
 */

#include "../include/marty.h"

Parser::Parser()
{

}

Parser::~Parser()
{

}

void Parser::parse(std::string path)
{
    std::ifstream file(path);

    if (!file)
        std::cout << "File not found" << std::endl;
    while (file) {
        std::string line;
        std::getline(file, line);
        _lines.push_back(line);
    }
}
