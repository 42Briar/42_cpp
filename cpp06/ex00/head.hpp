#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cctype>
#include <climits>

typedef enum type {
    CHAR, FLOAT, DOUBLE, INT, NO
} types;


void charconvert(std::string arg);
void intconvert(std::string arg);
void floatconvert(std::string arg);
void doubleconvert(std::string arg);

