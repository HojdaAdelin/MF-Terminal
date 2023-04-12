#include <iostream>
#include "../include.h"

using namespace std;

void help() {

    cout << "\nCommands list:" << endl;
    cout << "\n--help         Display the commands list" << endl;
    cout << "\nREDIRECT COMMANDS" << endl;
    cout << "--github         Open github website" << endl;
    cout << "--youtube        Open youtube website" << endl;
    cout << "--google         Open google on the browser" << endl;
    cout << "--facebook       Open facebook website" << endl;
    cout << "--gmail          Open gmail website" << endl;
    cout << "--mf             Open MF-Terminal source website" << endl;
    cout << "\nCUSTOMIZE COMMANDS" << endl;
    cout << "--cred           Set text color to red" << endl;
    cout << "--cblue          Set text color to blue" << endl;
    cout << "--cgreen         Set text color to green" << endl;
    cout << "--caqua          Set text color to aqua" << endl;
    cout << "--cpurple        Set text color to purple" << endl;
    cout << "\nDISPLAY COMMANDS" << endl;
    cout << "--main           Display the main view" << endl;
    cout << "--date           Add to the main view the current date" << endl;
    cout << "--cls            Clear the terminal" << endl;
    cout << "\nAPP COMMANDS" << endl;
    cout << "--exit           Exit terminal" << endl;
    cout << "--version        Display the current version" << endl;
    cout << "\nFUNCTIONALITY COMMANDS" << endl;
    cout << "--temp           Clean temp folder" << endl;
    cout << "--vs             Open VS Code if it's installed" << endl;
    cout << "--sd             Shut down the pc" << endl;
    cout << "--rs             Restart the pc" << endl;
    cout << endl;
    main();
    
}