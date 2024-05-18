/*
 * Emmett
 */

#pragma once

#include <string>
#include <vector>
#include <map>
#include <memory>
#include <iostream>
#include <bitset>
#include <fstream>

class Marty
{
public:
    Marty();
    ~Marty();
};

class Parser
{
public:
    Parser();
    ~Parser();

    void parse(std::string path);

    std::vector<std::string> _lines;
};