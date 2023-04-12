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
    }
}