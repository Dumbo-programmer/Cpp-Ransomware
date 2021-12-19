#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <Shlwapi.h> 
#include "zip.h"
#include "unzip.h"
#include "zlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <cstdio>

using namespace std;
#pragma comment(lib, "Shlwapi.lib")
bool nyAddfiletoZip(zipFile zfile, const std::string& fileNameinZip, const std::string& srcfile);
bool nyCollectfileInDirtoZip(zipFile zfile, const std::string& filepath, const std::string& parentdirName);
bool nyCreateZipfromDir(const std::string& dirpathName, const std::string& zipfileName, const std::string& parentdirName);

int main() {
 ofstream MyFile("Read.txt");
  // Write to the file
  MyFile << "U are hacked";
  // Close the file
  MyFile.close();
    string topicName;

    topicName = "Read.txt";
    system(topicName.c_str());
    ////
     int result;
  char oldname[] ="D:\\data.txt";
  char newname[] ="C:\\datadull\\newname.txt";
  result= rename( oldname , newname );
  if ( result == 0 )
    puts ( "File successfully renamed" );
  else
    perror( "Error renaming file" );
///
std::string dirpath = "C:\\User\\";            // The source file / folder 
    std::string zipfileName = "D:\\Test\\lango.rar";  // Destination compression package 
    nyCreateZipfromDir(dirpath, zipfileName, "User");
    system("pause");
    return 0;
}
