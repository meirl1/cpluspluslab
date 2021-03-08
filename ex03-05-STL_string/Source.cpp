#include <iostream>
#include <string>
using namespace std;


//using the string functions
void main()
{
    string present = "it is raining";
    string past = present;
    past.replace(3, 5, "was");
    //from place 3 (start from 0),
    // take 5 places and replace with "was"  à "it wasining"
    cout << past << endl;

    string word = "happy.";
    word.replace(5, 3, "!!!"); //happy!!!
    cout << word << endl;

    string americanFormat = "March 18, 2012";
    string universalFormat;
    int space = americanFormat.find(" ");
    string month = americanFormat.substr(0, space);
    //return sub string of americanFormat, from 0 take space chars
    cout << "month:" << month << endl;
    int psik = americanFormat.find(",");
    string day = americanFormat.substr(space, psik - space);
    cout << "day:" << day << endl;
    string year =
        americanFormat.substr(psik + 1, americanFormat.length() - (psik + 1));
    cout << "year:" << year << endl;

    //check input
    bool check = true;
    if (atoi(year.c_str()) < 1970 || atoi(year.c_str()) > 2012)
        check = false;
    if (check)
        universalFormat = day + " " + month + year;
    cout << "universalFormat:" << universalFormat << endl;
}

/*
it wasining
happy!!!
month : March
day : 18
year : 2012
universalFormat : 18 March 2012
*/



