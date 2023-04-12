#include <iostream>
#include <fstream>
#include "color.h"

using namespace std;

string color;
void write_color();

void red() {
    system("Color 04");
    color = "red";
    write_color();
    cout << endl;
    main();
}

void blue() {
    system("Color 01");
    color = "blue";
    write_color();
    cout << endl;
    main();
}

void green() {
    system("Color 02");
    color = "green";
    write_color();
    cout << endl;
    main();
}

void aqua() {
    system("Color 03");
    color = "aqua";
    write_color();
    cout << endl;
    main();
}

void purple() {
    system("Color 05");
    color = "purple";
    write_color();
    cout << endl;
    main();
}

void white() {
  system("Color 07");
  color = "white";
  write_color();
  cout << endl;
  main();
}

void write_color() {

    ofstream writeColor("color.cfg");

    writeColor << color << endl;

    writeColor.close();

}

void load_color() {

    string color_config;

    ifstream loadColor("color.cfg");

    loadColor >> color_config;

    loadColor.close();

    if (color_config == "red") {
        system("Color 04");
    } else if (color_config == "blue") {
        system("Color 01");
    } else if (color_config == "green") {
        system("Color 02");
    } else if (color_config == "aqua") {
        system("Color 03");
    } else if (color_config == "purple") {
        system("Color 05");
    } else if (color_config == "white") {
        system("Color 07");
    }

}