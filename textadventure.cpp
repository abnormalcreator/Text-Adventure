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


    cout << "Hello, what is your name?" << endl;
    cin >> playername;

    // Ask how old they are
    cout << "Hello, " << playername << "!\n\n";
    cout << "How old are you?\n";
    cin >> age;



    cout << "\nOk, lets begin\n";

    cout << playername << ",you get out of your bed to the sound of your alarm clock, and you walk down your your hall still tired.\n";
    cin.ignore(1000, '\n');
    getchar();
    cout << "\nOn your table you see a coffee maker.\n Do you want to make coffee? Type 'yes' or 'no'. \n";
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
    cin.ignore(1000, '\n');
    getchar();
    cout << playername << ", you here the door bell ring, so you walk up to the door to open it.\n"
    getchar();
    cout << "You see a man standing there.\n\n";
    getchar();
    cout << "Hello, " << playername << "! I'm Vault Tec dude. Since you served in the army, you are getting a free pass to be able to go in our new vault if a disaster happens, vault 111!\n";

    cin.ignore(1000, '\n');
    getchar();
    cout << "Can you please fill out this form with your information?\n";
    cout << "Type 'ok' or 'why'\n";
    cin >> choice;

    if (choice == "ok")
    {
        morale -= 10;
        cout << "your morale is %"<< morale << endl;


    }

    if (choice == "why")
    {
        morale += 10;
        cout << "your morale is %"<< morale << endl;

    }

    getchar();
    return 0;
}






