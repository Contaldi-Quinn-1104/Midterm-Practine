#include "banana.h"

void printIntro();
void printCompanyPolicy();
void printMenuOption();
void printComplaint();
void printSaladOptions();
int main()
{
    int menuOption, menuChoice = 1;
    printIntro();
    cout << endl << endl;
    do
    {
        printMenuOption();
        cout << "MenuChoice: " << endl;
        cin >> menuChoice;
        switch(menuChoice)
        {
            case 0:
                  break;
            case 1:
                  break;
            case 2:
                  break;
            case 3:
                  printSaladOptions();
                  break;
            case 4:
                  printCompanyPolicy();
                  break;
            case 5:
                  printComplaint();
                  break;
            default:
                  cout << "BAKA wrong choice try again" << endl;

        }
    } while (menuOption != 0);
    

}

void printIntro()
{
    cout << R"(
_________     ________________________._____________.____      _______________ ___._______________________     _____  ______________________
\_   ___ \   /  _  \__    ___/  _____/|   \______   \    |     \_   _____/    |   \   \__    ___/\_   ___ \   /  _  \ \_   _____/\_   _____/
/    \  \/  /  /_\  \|    | /   \  ___|   ||       _/    |      |    __) |    |   /   | |    |   /    \  \/  /  /_\  \ |    __)   |    __)_ 
\     \____/    |    \    | \    \_\  \   ||    |   \    |___   |     \  |    |  /|   | |    |   \     \____/    |    \|     \    |        \
 \______  /\____|__  /____|  \______  /___||____|_  /_______ \  \___  /  |______/ |___| |____|    \______  /\____|__  /\___  /   /_______  /
        \/         \/               \/            \/        \/      \/                                   \/         \/     \/            \/        
)";
 cout << endl;
 cout << "Welcome most valued costumer please follow these rules or you will face capital punishment" << endl;
 cout << "1. Have an excellent time OwO and enjoy your Fruit salad UwU" << endl;
 cout << "2. Please be patient (*' -`)('- `*) covid has made thing really hard ^///////^" << endl;
 cout << "3. If you have a complant please press the complant menu option, yelling at catgirls is not allowed" << endl;
 cout << "4. You must have money for the order as soon as its ready. no IOU ÓwÓ" << endl;
}

void printCompanyPolicy()
{

cout << R"(
⣿⡟⠙⠛⠋⠩⠭⣉⡛⢛⠫⠭⠄⠒⠄⠄⠄⠈⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⡇⠄⠄⠄⠄⣠⠖⠋⣀⡤⠄⠒⠄⠄⠄⠄⠄⠄⠄⠄⠄⣈⡭⠭⠄⠄⠄⠉⠙
⣿⡇⠄⠄⢀⣞⣡⠴⠚⠁⠄⠄⢀⠠⠄⠄⠄⠄⠄⠄⠄⠉⠄⠄⠄⠄⠄⠄⠄⠄
⣿⡇⠄⡴⠁⡜⣵⢗⢀⠄⢠⡔⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⣿⡇⡜⠄⡜⠄⠄⠄⠉⣠⠋⠠⠄⢀⡄⠄⠄⣠⣆⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢸
⣿⠸⠄⡼⠄⠄⠄⠄⢰⠁⠄⠄⠄⠈⣀⣠⣬⣭⣛⠄⠁⠄⡄⠄⠄⠄⠄⠄⢀⣿
⣏⠄⢀⠁⠄⠄⠄⠄⠇⢀⣠⣴⣶⣿⣿⣿⣿⣿⣿⡇⠄⠄⡇⠄⠄⠄⠄⢀⣾⣿
⣿⣸⠈⠄⠄⠰⠾⠴⢾⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢁⣾⢀⠁⠄⠄⠄⢠⢸⣿⣿
⣿⣿⣆⠄⠆⠄⣦⣶⣦⣌⣿⣿⣿⣿⣷⣋⣀⣈⠙⠛⡛⠌⠄⠄⠄⠄⢸⢸⣿⣿
⣿⣿⣿⠄⠄⠄⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠈⠄⠄⠄⠄⠄⠈⢸⣿⣿
⣿⣿⣿⠄⠄⠄⠘⣿⣿⣿⡆⢀⣈⣉⢉⣿⣿⣯⣄⡄⠄⠄⠄⠄⠄⠄⠄⠈⣿⣿
⣿⣿⡟⡜⠄⠄⠄⠄⠙⠿⣿⣧⣽⣍⣾⣿⠿⠛⠁⠄⠄⠄⠄⠄⠄⠄⠄⠃⢿⣿
⣿⡿⠰⠄⠄⠄⠄⠄⠄⠄⠄⠈⠉⠩⠔⠒⠉⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠐⠘⣿
⣿⠃⠃⠄⠄⠄⠄⠄⠄⣀⢀⠄⠄⡀⡀⢀⣤⣴⣤⣤⣀⣀⠄⠄⠄⠄⠄⠄⠁⢹)";
}

void printMenuOption()
{
 cout << "here is the following menu option NYANNNNNNNNN" << endl;
 cout << "0. To exit the Store :(" << endl;
 cout << "1. Build a Fruit Salad MEOW!!!! :) <3!!!" << endl;
 cout << "2. Salad size options" << endl;
 cout << "3. Fruit options" << endl;
 cout << "4. company policy" << endl;
 cout << "5. company complaints department" << endl;
}

void printComplaint()
{
    cout << R"(
                    __________________
                      \                 \
                        \                 \
                          \                 \
                            \                 \
           /-------------------------------------
         //---------------//                  / |
       //               //                  / __|
     //               //                  / /  ||
   //               //                  / /    ||
 //_______________//   o o            / /      ||      ___/-\___
------------------------------------/   ------- |     |---------|
| Complaints  |         | HOUSEHOLD |           |      | | | | |
| Box         |         |WASTE ONLY |           |      | | | | |
|--------------         ------------|           |      | | | | |
|                                   |           |      | | | | |
-------------------------------------------------      |_______|
    )";
}

void printSaladOptions()
{
    cout << "$10 Small Salad 4 servings" << endl;
    cout << "$14 Medium Salad 6 servings" << endl;
    cout << "$16 Large Salad  8 servings" << endl;
}