#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Error
{
private:
	string komunikat;
public:
	Error(const string _komunikat);
	void ExportErrorList(const string _komunikat);
};