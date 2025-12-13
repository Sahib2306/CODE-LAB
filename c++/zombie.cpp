#include <iostream>
using namespace std;
int main()
{
    cout << "====================================================" << endl;
    cout << "                 ZOMBIE SURVIVAL                    " << endl;
    cout << "====================================================" << endl;
    string name;
    cout << "ENTER PLAYER NAME: ";
    cin >> name;
    cout << endl;
    cout << "====================================================" << endl;
    cout << "INSTRUCTIONS:: \n1.ZOMBIE HAS 100 HP\n2.WEAPONS\n 1::SWORD[-30HP]\n 2::GUN[-50HP]\n 3::PUNCH[-10HP]" << endl;
    cout << "====================================================" << endl;

    int z_hp = 100;
    int p_hp = 100;

    int weapon;
    while (z_hp > 0)
    {
        cout << "WHICH WEAPON YOU WANT TO USE FOR ZOMBIE?" << endl;
        cin >> weapon;
        if (weapon == 1)
        {
            z_hp -= 30;
            cout << "SLASH" << endl;
            cout << "THE HEALTH OF ZOMBIE IS: " << z_hp << endl;
        }
        else if (weapon == 2)
        {
            z_hp -= 50;
            cout << "DHICHKIAUN" << endl;
            cout << "THE HEALTH OF ZOMBIE IS: " << z_hp << endl;
        }
        else if (weapon == 3)
        {
            z_hp -= 10;
            cout << "DHISHOOM" << endl;
            cout << "THE HEALTH OF ZOMBIE IS: " << z_hp << endl;
        }
        else
        {
            cout << "INVALID CHOICE" << endl;
            cout << "YOU LOSE!! " << name << endl;
            break;
        }
        if (z_hp == 0)
        {
            cout << "ZOMBIE DEFEATED!!\nYOU WON!! " << name << endl;
            break;
        }
        else
        {
            cout << "ZOMBIE STILL ALIVE! KEEP ON FIGHTING  " << name << endl;
        }
    }
    cout << "====================================================" << endl;
    cout << "     CONGRATULATIONS  " << name << "!! YOU ENTERED LEVEL 2!!" << endl;
    cout << "====================================================" << endl;
    cout << "INSTRUCTIONS FOR LEVEL 2!!\n1.PLAYER MUST DEFEAT 5 ZOMBIES\n2.EACH ZOMBIE WITH 100 HP\n3.THE GAME CONTINUES TILL ALL THE ZOMBIES ARE DEFEATED\n4.NOTE!! IF PRESSED WRONG KEY, PLAYER GETS KILLED BY THE ZOMBIE!!" << endl;
    cout << "====================================================" << endl;
    string ask;
    cout << " DO YOU WANT TO Enter LEVEL 2? 'YES' or 'NO': ";
    cin >> ask;
    int z_count = 5;
    if (ask == "YES" || ask == "yes")
    {
        cout << "THE ZOMBIES ARE COMING!!" << endl;
        for (int i = 0; i <= 5; i++)
        {
            cout << "WHICH WEAPON YOU WANT TO USE FOR ZOMBIE?" << endl;
            cin >> weapon;
            if (weapon == 1)
            {
                z_hp -= 30;
                cout << "SLASH" << endl;
                cout << "THE HEALTH OF ZOMBIE IS: " << z_hp << endl;
            }
            else if (weapon == 2)
            {
                z_hp -= 50;
                cout << "DHICHKIAUN" << endl;
                cout << "THE HEALTH OF ZOMBIE IS: " << z_hp << endl;
            }
            else if (weapon == 3)
            {
                z_hp -= 10;
                cout << "DHISHOOM" << endl;
                cout << "THE HEALTH OF ZOMBIE IS: " << z_hp << endl;
            }
            else
            {
                cout << "INVALID CHOICE" << endl;
                cout << "YOU LOSE!! " << name << endl;
                break;
            }
            if (z_hp == 0)
            {
                cout << "ZOMBIE DEFEATED!!\nYOU WON!! " << name << endl;
                z_count -= 1;
                cout << "ZOMBIES LEFT ARE: " << z_count << endl;
                break;
            }
            else
            {
                cout << "ZOMBIE STILL ALIVE! KEEP ON FIGHTING  " << name << endl;
            }
        }
    }

    return 0;
}