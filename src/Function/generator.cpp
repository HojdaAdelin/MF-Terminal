#include <iostream>
#include "../include.h"
#include <fstream>

using namespace std;

const int ch_MAX = 61;
string RandomString(int ch)

{
  char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                        'h', 'i', 'j', 'k', 'l', 'm', 'n',
                        'o', 'p', 'q', 'r', 's', 't', 'u',
                        'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
                        'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                        'V', 'W', 'X', 'Y', 'Z', '1', '2', '3',
                        '4', '5', '6', '7', '8', '9'};

  string result = "";
  for (int i = 0; i<ch; i++)
    result = result + alpha[rand() % ch_MAX];

  return result;
}

string Pass_save_generator()

{
  int ch = 16;
  char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                        'h', 'i', 'j', 'k', 'l', 'm', 'n',
                        'o', 'p', 'q', 'r', 's', 't', 'u',
                        'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
                        'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                        'V', 'W', 'X', 'Y', 'Z', '1', '2', '3',
                        '4', '5', '6', '7', '8', '9'};

  string result = "";
  for (int i = 0; i<ch; i++)
    result = result + alpha[rand() % ch_MAX];

  return result;
}

void random() {

  srand(time(NULL));
  int ch = 32;
  cout << endl;
  cout<<RandomString(ch) <<"\n\n";
  main();
  
}
int ch = 16;
string global_password = Pass_save_generator();
void password() {
  
  srand(time(NULL));
  cout << endl;
  cout<< global_password <<"\n\n";
  main();
}

void save_password() {


  ofstream savePassword("password.cfg");

  savePassword << global_password << endl;

  savePassword.close();
  
  cout << "\nThe password was saved.\n\n";

  
  main();
}

void display_password() {

  string random;

  ifstream displayPassword("password.cfg");

  displayPassword >> random;

  displayPassword.close();
  
  cout << "\nThe password is " << random << endl;
  cout << "\n";
  main();

}