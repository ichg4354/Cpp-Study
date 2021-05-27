#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;

void ReadCsv(std::string FileName, std::vector<std::vector<std::string>> &Data)
{
    std::ifstream ifs;

    ifs.open(FileName);
    if (!ifs.is_open())
        return;

    std::string LineString = "";
    std::string Delimeter = ",";
    while (getline(ifs, LineString))
    {
        std::vector<std::string> RowData;
        unsigned int nPos = 0, nFindPos;
        do
        {
            nFindPos = LineString.find(Delimeter, nPos);
            if (nFindPos == std::string::npos)
                nFindPos = LineString.length();

            RowData.push_back(LineString.substr(nPos, nFindPos - nPos));
            nPos = nFindPos + 1;
        } while (nFindPos < LineString.length());
        Data.push_back(RowData);
    }
    ifs.close();
}

int main()
{
    vector<vector<string>> value;
    ReadCsv("diabeties.csv", value);
}
