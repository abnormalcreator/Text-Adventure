#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    string playername;

    int age;
    int morale = 100;


    cout << "Hello\n" << "what is your name?" << endl;
    cin >> playername;

    // Ask how old they are
    cout << "Hello, " << playername << "!\n\n";
    cout << "How old are you?\n";
    cin >> age;



    cout << "ok lets begin\n";

    cout << playername << ",you get out of your bed to the sound of your alarm clock, you walk down your your hall still tired, on your table you see your coffee maker, do you want to make coffee? Type yes or no. \n";
    string choice;
    cin >> choice;

    if (choice == "yes")
    {
        morale = 100;
        cout << "your morale is at %100\n";
    }


    if (choice == "no")
    {
        morale = 90;
        cout << "your morale is at %90\n";

    }
    cout << playername << " you here the door bell ring and you walk up to your door to open it.\n";
    cout << "hello " << playername << " im vault tec dude, since you served in the army you are getting a free pass to be able to go in our new vault if a disaster happens, vault 111\n";

    cout << "can you please fill out this form with your information?";
    cout << "type 'ok' or 'why'";
    cin >> choice;

    if (choice == "ok")
    {
        morale -= 10;
        cout << "your morale is "<< morale << endl;


    }

    if (choice == "why")
    {
        morale += 10;
        cout << "your morale is "<< morale << endl;

    }


    return 0;
}






