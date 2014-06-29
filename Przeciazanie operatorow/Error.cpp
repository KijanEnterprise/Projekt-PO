#include "Error.h"

Error::Error(const string _komunikat):komunikat(_komunikat)
{}


void Error::ExportErrorList(const string _komunikat)
{
	ofstream ofs("Error log.txt");
	if (ofs.is_open()) 
	{
		ofs << _komunikat << endl;
		ofs.close();
	}
}