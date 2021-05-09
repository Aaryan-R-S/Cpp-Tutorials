#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s = "Classes are : \n1. fstreambase \n2. ifstream --> derived from 1st class \n3. ofstream --> derived from 1st class";
    ofstream writeFile("t60files.txt");
    // OR ofstream writeFile;
    //    writefile.open("t60files.txt");
    writeFile<<s;
    writeFile<<"\n\n!!!Done!!!";
    writeFile.close();

    string sR;
    ifstream readFile("t60files.txt");
    while (getline(readFile, sR))
    {
        cout<<sR<<endl;
    }
    readFile.close();
     
    return 0;
}