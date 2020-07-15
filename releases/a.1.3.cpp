#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

// Contributors: (Put your name here if you contributed to the OS.)
//
//
//

void prnthlp() {
    cout << "Help screen\n";
    cout << "X========= COMMAND LIST ===============================X\n";
    cout << "X ?/help - Shows this screen.                          X\n";
    cout << "X cls/clear - Clears the screen.                       X\n";
    cout << "X ver - Shows the version of the command console.      X\n";
    cout << "X calc - Opens an addition calculator.                 X\n";
    cout << "X debug - Opens a debugger screen. (For devs only!)    X\n";
    cout << "X dev.hlp - Opens developer help screen.               X\n";
    cout << "X======================================================X\n";

}

void creditss() {
    cout << "\n";
    cout << "FreeOS: The Open-Source OS.\n";
    cout << "\n\nOriginal Idea by Honest\n";
    cout << "\nCo-Developer: Professor\n\n";
}


void cmdline() {
  string x;
  string cls = "cls";
  string cls2 = "clear";
  string ver = "ver";
  string help = "?";
  string write = "wr";
  string help2 = "help";
  string calc = "calc";
  string dir = "dir";
  string devhlp = "dev.hlp";
  string devbsod = "dev.bsod";
  string credits = "credits";
  cout << "$ ";
  cin >> x;
  if (x == cls) {
    system("cls");
    cmdline();
  } else if (x == ver) {
    cout << "FreeOS ver alpha 1.3 (For Windows.)\n";
    cmdline();
    cmdline();
  } else if (x == help) {
    prnthlp();
    cmdline();
  } else if (x == credits) {
    creditss();
    cmdline();
  } else if (x == devbsod) {
    system("color 9F");
    system("cls");
    cout << "An error has occurred in FreeOS, if you see this screen,\n";
    cout << "please contact help at: unlimitedminecraft2011@gmail.com\n";
    system("pause");
    system("color 2F");
    system("cls");
    cmdline();
  } else if (x == help2) {
    prnthlp();
    cmdline();
  } else if (x == devhlp) {
    cout << "Dev help screen\ndev.bsod > debug bsod screen\n";
    cout << "\n";
    cmdline();
  } else if (x == cls2) {
    system("cls");
    cmdline();
  } else if (x == calc) {
      int a;
  cout << "Type a number: ";
  cin >> a;
  int b;
  cout << "Type a second number: ";
  cin >> b;
  int sum = a + b;
  cout << sum;
  cout << "\n";
    cmdline();
  } else {
    cout << "Error, ";
    cout << x;
    cout << " is not a command.\n";
    cmdline();
  }
}

int main() {
  cout << "FreeOS Alpha 1.3 Windows edition\nType '?' or 'help' for a list of commands\n";
  cout << "Now on Github! bit.ly/freeos\n";
  system("color 2F");
  cmdline();
  return 0;
}
