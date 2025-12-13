#include <iostream>
#include <cstdlib> // For rand()
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
    cout << "INSTRUCTIONS:: \n1. ZOMBIE HAS 100 HP\n2. WEAPONS\n 1:: SWORD [-30HP]\n 2:: GUN [-50HP]\n 3:: PUNCH [-10HP]" << endl;
    cout << "====================================================" << endl;

    int p_hp = 100;
    int z_hp = 100;
    int weapon;

    while (z_hp > 0 && p_hp > 0)
    {
        cout << "WHICH WEAPON YOU WANT TO USE FOR ZOMBIE?" << endl;
        cin >> weapon;

        if (weapon == 1)
            z_hp -= 30;
        else if (weapon == 2)
            z_hp -= 50;
        else if (weapon == 3)
            z_hp -= 10;
        else
        {
            cout << "INVALID CHOICE! YOU LOSE 20 HP!" << endl;
            p_hp -= 20;
            continue;
        }

        cout << "ZOMBIE HEALTH: " << z_hp << endl;

        if (z_hp <= 0)
        {
            cout << "ZOMBIE DEFEATED!!\nYOU WON!! " << name << endl;
            break;
        }

        // Zombie attacks back
        int z_attack = rand() % 20 + 10; // Random damage between 10-30
        p_hp -= z_attack;
        cout << "ZOMBIE ATTACKED! YOUR HEALTH: " << p_hp << endl;

        if (p_hp <= 0)
        {
            cout << "YOU DIED! GAME OVER." << endl;
            return 0;
        }
    }

    cout << "====================================================" << endl;
    cout << "     CONGRATULATIONS  " << name << "!! YOU ENTERED LEVEL 2!!" << endl;
    cout << "====================================================" << endl;
    cout << "INSTRUCTIONS FOR LEVEL 2!!\n1. PLAYER MUST DEFEAT 5 ZOMBIES\n2. EACH ZOMBIE WITH 100 HP\n3. PLAYER HAS " << p_hp << " HP LEFT\n4. IF PRESSED WRONG KEY, PLAYER LOSES 20 HP!" << endl;
    cout << "====================================================" << endl;

    string ask;
    cout << "DO YOU WANT TO ENTER LEVEL 2? 'YES' or 'NO': ";
    cin >> ask;

    if (ask == "YES" || ask == "yes")
    {
        int z_count = 5;
        cout << "THE ZOMBIES ARE COMING!!" << endl;

        while (z_count > 0 && p_hp > 0)
        {
            z_hp = 100;
            while (z_hp > 0 && p_hp > 0)
            {
                cout << "WHICH WEAPON YOU WANT TO USE FOR ZOMBIE?" << endl;
                cin >> weapon;

                if (weapon == 1)
                    z_hp -= 30;
                else if (weapon == 2)
                    z_hp -= 50;
                else if (weapon == 3)
                    z_hp -= 10;
                else
                {
                    cout << "INVALID CHOICE! YOU LOSE 20 HP!" << endl;
                    p_hp -= 20;
                    continue;
                }

                cout << "ZOMBIE HEALTH: " << z_hp << endl;

                if (z_hp <= 0)
                {
                    cout << "ZOMBIE DEFEATED! ZOMBIES LEFT: " << --z_count << endl;
                    break;
                }

                int z_attack = rand() % 20 + 10;
                p_hp -= z_attack;
                cout << "ZOMBIE ATTACKED! YOUR HEALTH: " << p_hp << endl;

                if (p_hp <= 0)
                {
                    cout << "YOU DIED! GAME OVER." << endl;
                    return 0;
                }
            }
        }

        if (p_hp > 0)
            cout << "CONGRATULATIONS " << name << "!! YOU SURVIVED LEVEL 2!!" << endl;
    }
    else
    {
        cout << "THANK YOU FOR PLAYING!" << endl;
    }

    return 0;
}
