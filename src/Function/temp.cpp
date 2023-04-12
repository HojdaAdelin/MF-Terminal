#include <windows.h>
#include <iostream>
#include <string>
#include "../include.h"

using namespace std;

void DeleteAllFiles(string strPath)
{

  WIN32_FIND_DATA wfd;
  HANDLE hFile;
  DWORD dwFileAttr;
  string strFile;
  string strSpec = strPath + "*.*";
  string strPathFile;

  // find the first file
  hFile = FindFirstFile(strSpec.c_str(), &wfd);

  if(hFile != INVALID_HANDLE_VALUE)
	{
    do
		{
      strFile = wfd.cFileName;
      strPathFile = strPath + strFile;
      // get the file attributes
      dwFileAttr = GetFileAttributes(strPathFile.c_str());

      // see if file is read-only : if so unset read-only
      if (dwFileAttr & FILE_ATTRIBUTE_READONLY)
			{
        dwFileAttr &= ~FILE_ATTRIBUTE_READONLY;
        SetFileAttributes(strPathFile.c_str(), dwFileAttr);
      }

      // see if the file is a directory
      if(wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
        // make sure it isn't current or parent directory
        if(strFile != "." && strFile != "..")
				{
          strPathFile += "\\";
          // recursively delete all files in this folder
          DeleteAllFiles(strPathFile);
          // remove the directory

          if(RemoveDirectory(strPathFile.c_str()))
					{
            cout << "deleted directory : " << strPathFile.c_str() << endl;
          }
					else
					{
            cout << "could not delete directory : " << strPathFile.c_str() << endl;
          }
        }
      }
			else
			{
        // delete the file
        if(DeleteFile(strPathFile.c_str()))
				{
          cout << "deleted file: " << strPathFile.c_str() << endl;
        }
				else
				{
          cout << "could not delete file: " << strPathFile.c_str() << endl;
        }
      }
    }
		while(FindNextFile(hFile, &wfd));
  }

  FindClose(hFile);
}

void TempExecutable(){

  char szPath[MAX_PATH];

  GetTempPath(MAX_PATH, szPath);

  DeleteAllFiles(szPath);

  cout << "\n";
  
  main();

}