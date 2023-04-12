#include <iostream>
#include "include.h"
#include "../src/Customize/Config/color.h"

#include <string>

using namespace std;

int main() {

    load_color();

    string ch;

    cout << "Enter a command> "; cin >> ch;

    if (ch == "--help") {
        help();
    } else if (ch == "--github") {
        github();
    } else if (ch == "--youtube") {
        youtube();
    } else if (ch == "--google") {
        google();
    } else if (ch == "--facebook") {
        facebook();
    } else if (ch == "--gmail") {
        gmail();
    } else if (ch == "--mf") {
        mf_t();
    } else if (ch == "--cred") {
        red();
    } else if (ch == "--cblue") {
        blue();
    } else if (ch == "--cgreen") {
        green();
    } else if (ch == "--caqua") {
        aqua();
    } else if (ch == "--cpurple") {
        purple();
    } else if (ch == "--main") {
        cout << endl;
        main();
    } else if (ch == "--date") {
        date();
    } else if (ch == "--cls") {
        clear();
    } else if (ch == "--exit") {
        app_exit();
    } else if (ch == "--version") {
        version();
    } else if (ch == "--changelog") {
        changelog();
    } else if (ch == "--temp") {
        TempExecutable();
    } else if (ch == "--vs") {
        vs();
    } else if (ch == "--sd") {
        shut_down();
    } else if (ch == "--rs") {
        restart();
    } else if (ch == "--cdefault") {
        white();
    } else {
        cout << "\nWrong termen\n";
        main();
    }
}