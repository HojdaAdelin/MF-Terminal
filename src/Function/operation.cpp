#include <iostream>
#include "../include.h"

using namespace std;

void shut_down() {
  
  string option;
  cout << "\nAre you sure you want to shut down the pc? [y/n]" << endl;
  cin >>option;
  
  if (option == "y") {
    system("C:\\windows\\system32\\shutdown /s /t 30 \n\n");
  } else if (option == "n") {
    cout << "\n";
    main();
  } else {
    cout << "\nWrong termen\n";
    main();
  }
  
  
}

void restart() {
  

  string option;
  cout << "\nAre you sure you want to restart the pc? [y/n]" << endl;
  cin >>option;

  if (option == "y") {
    system("C:\\windows\\system32\\shutdown /r /t 30\n\n");
  } else if (option == "n") {
    cout << "\n";
    main();
  } else {
    cout << "\nWrong termen\n";
    main();
  }
  
}