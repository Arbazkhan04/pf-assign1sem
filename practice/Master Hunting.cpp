#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

/*

<<<<<Important Directions Before checking the code>>>>>

1.  _RIght / _Left / _Up / _Down  =  Towards(Right / Left / Up / Down)
2.  E1 / E2  = Enemy1 / Enemy2

*/

// Ascii Codes
char a = 205; // horizontal
char b = 186; // vertical
char c = 201; // upper left corner
char d = 200; // lower left corner
char e = 187; // upper right corner
char f = 188; // lower right corner
char g = 185; // up, down, left connection
char h = 204; // up, down, right connection "<<"
char i = 202; // right, left, up connection
char j = 203; // right , left, down connection
char k = 206; // all four sides connection
char l = 219; // box
char s = 32;  // space
char o = 111; // Letter "o";

// Maze
void maze();
void finishLine();
void remFinishLine();

// Other Functions & Variables
int sleepValue = 60;
int characterLife = -10;
void gotoxy(int x, int y);
void clearScreen();
char getCharAtxy(short int x, short int y);
void printBullet(int x, int y);
void eraseBullet(int x, int y);

// Game Functions
string gameLevel();
string ManuList();
void game();
void characterMovement();
void enemyMovement();
void enemyFiring();
void bigEnemy();
void bigEnemySearchSystem();
void enemyRemoveDecision();
void gameLevelManu();
void clearGameBeforePlay();

// Character
int characterX = 8;
int characterY = 7;
void printCharacter(int x, int y);
void moveCharacterUp();
void moveCharacterDown();
void moveCharacterLeft();
void moveCharacterRight();

// Big Enemy
void upwardSearching();
void rightsideSearching();
void leftsideSearching();
void downwardSearching();
/*  Towards Right   */
int BEbulletCount_Right = 0;
bool BEisEmpty_Right = false;
int BEbulletX_Right[100];
int BEbulletY_Right[100];
void BEgenerateBullet_Right();
void BEmoveBullet_Right();
void BEremBulletFromArray_Right(int index);
void BEbulletHitting_Right();
/*  Towards Left   */
int BEbulletCount_Left = 0;
bool BEisEmpty_Left = false;
int BEbulletX_Left[100];
int BEbulletY_Left[100];
void BEgenerateBullet_Left();
void BEmoveBullet_Left();
void BEremBulletFromArray_Left(int index);
void BEbulletHitting_Left();
/*  Towards Up   */
int BEbulletCount_Up = 0;
bool BEisEmpty_Up = false;
int BEbulletX_Up[100];
int BEbulletY_Up[100];
void BEgenerateBullet_Up();
void BEmoveBullet_Up();
void BEremBulletFromArray_Up(int index);
void BEbulletHitting_Up();
/*  Towards Down   */
int BEbulletCount_Down = 0;
bool BEisEmpty_Down = false;
int BEbulletX_Down[100];
int BEbulletY_Down[100];
void BEgenerateBullet_Down();
void BEmoveBullet_Down();
void BEremBulletFromArray_Down(int index);
void BEbulletHitting_Down();

// Enemy1
int enemy1X = 45;
int enemy1Y = 1;
int enemy1Timer = 0;
string enemy1Direction = "Left";
bool remEnemy1 = false;
void printEnemy(int x, int y);
void eraseObject(int x, int y);
void moveEnemy1();
void enemy1Firing();
/*  Enemy1 Bullet Towards Right (Left to Right) */
int E1bulletCount_Right = 0;
bool E1isEmpty_Right = false;
int E1bulletX_Right[100];
int E1bulletY_Right[100];
void E1generateBullet_Right();
void E1moveBullet_Right();
void E1remBulletFromArray_Right(int index);
void E1bulletHitting_Right();
/*  Enemy1 Bullet Towards Left (Right To Left)  */
int E1bulletCount_Left = 0;
bool E1isEmpty_Left = false;
int E1bulletX_Left[100];
int E1bulletY_Left[100];
void E1generateBullet_Left();
void E1moveBullet_Left();
void E1remBulletFromArray_Left(int index);
void E1bulletHitting_Left();

// Enemy2
int enemy2X = 8;
int enemy2Y = 23;
int enemy2Timer = 0;
string enemy2Direction = "Left";
bool remEnemy2 = false;
void moveEnemy2();
void enemy2Firing();
/*  Enemy1 Bullet Towards Right (Left to Right) */
int E2bulletCount_Right = 0;
bool E2isEmpty_Right = false;
int E2bulletX_Right[100];
int E2bulletY_Right[100];
void E2generateBullet_Right();
void E2moveBullet_Right();
void E2remBulletFromArray_Right(int index);
void E2bulletHitting_Right();
/*  Enemy1 Bullet Towards Left (Right To Left)  */
int E2bulletCount_Left = 0;
bool E2isEmpty_Left = false;
int E2bulletX_Left[100];
int E2bulletY_Left[100];
void E2generateBullet_Left();
void E2moveBullet_Left();
void E2remBulletFromArray_Left(int index);
void E2bulletHitting_Left();

// Health
int health = 0;
void printHealth();
void decreaseHealth();

main()
{
    system("cls");
    string choice = "0";
    while (choice != "4")
    {
        choice = ManuList();
        if (choice == "1")
        {
            clearGameBeforePlay();
            game();
            clearScreen();
        }
        else if (choice == "2")
        {
            cout << "Level" << endl;
            gameLevelManu();
            clearScreen();
        }
        else if (choice == "3")
        {
            cout << "High Scores" << endl;
            clearScreen();
        }
        else
        {
            cout << "You've entered a wrong input. Please Try again" << endl;
            clearScreen();
        }
        system("cls");
    }
}

// Maze
void maze()
{
    cout << c << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << e << endl;
    cout << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << endl;
    cout << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << endl;
    cout << b << s << s << c << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << j << a << a << a << e << s << s << s << c << a << a << a << a << a << a << a << a << a << a << a << a << a << a << j << a << a << a << j << a << a << a << s << s << e << s << s << b << endl;
    cout << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << d << a << a << a << g << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << b << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << b << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << c << s << s << a << a << a << a << e << s << s << c << a << j << a << e << s << s << s << s << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << b << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << b << s << s << s << s << b << s << b << s << s << s << s << s << s << b << s << s << s << c << a << a << a << a << a << a << a << a << a << a << e << s << s << s << d << a << a << a << f << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << f << s << s << s << s << d << a << b << s << s << s << s << s << s << f << s << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << h << a << a << a << e << s << s << s << s << s << s << s << s << s << b << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << h << a << a << a << f << s << s << s << s << s << s << s << s << s << f << s << s << s << s << s << s << s << s << s << s << b << s << s << a << a << a << a << a << a << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << c << a << e << s << s << s << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << c << e << s << s << s << s << s << s << s << s << s << s << s << s << s << a << k << a << s << s << s << s << s << s << s << s << s << s << s << b << s << s << b << s << b << s << s << s << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << b << b << s << s << s << s << s << s << s << s << c << a << j << a << e << s << b << s << d << a << a << a << a << a << a << a << a << a << a << f << s << s << b << s << f << s << s << s << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << b << b << s << s << s << s << s << s << s << s << s << s << b << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << c << a << a << e << s << s << b << s << s << b << endl;
    cout << b << s << s << h << a << a << a << j << a << a << i << i << a << a << a << a << a << f << s << s << s << s << b << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << b << s << s << b << s << s << s << s << s << b << endl;
    cout << b << s << s << b << s << s << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << d << a << e << s << s << b << s << s << b << s << s << s << s << s << b << endl;
    cout << b << s << s << d << a << a << a << f << s << s << s << s << s << s << s << s << s << s << s << s << s << s << d << a << f << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << h << a << a << f << s << s << s << s << s << b << endl;
    cout << b << s << s << s << s << s << s << s << s << s << e << s << s << c << a << e << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << a << a << a << e << s << s << s << s << s << s << s << s << s << b << s << s << b << s << s << s << s << s << s << s << s << b << endl;
    cout << b << s << s << s << s << s << s << s << s << s << b << s << s << b << s << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << s << s << s << s << s << b << s << s << b << s << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << c << s << s << s << s << s << s << b << s << s << b << s << b << s << s << s << s << s << s << s << s << s << s << s << e << s << s << s << s << s << s << h << a << a << e << s << s << s << s << s << s << b << s << s << h << e << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << b << s << s << s << s << s << s << b << s << s << b << s << b << s << s << s << s << s << s << s << s << s << s << s << b << s << s << s << s << s << s << b << s << s << b << s << s << s << s << s << s << b << s << s << b << b << s << s << s << s << b << s << s << b << endl;
    cout << b << s << s << d << a << a << a << a << a << a << f << s << s << d << a << f << s << s << d << a << a << a << a << a << a << a << a << f << s << s << s << s << s << s << d << a << a << i << a << a << a << a << s << s << i << s << s << d << i << a << a << a << a << f << s << s << b << endl;
    cout << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << endl;
    cout << b << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << s << endl;
    cout << d << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << f << endl;
}
void finishLine()
{
    gotoxy(56, 23);
    cout << b;
    gotoxy(56, 24);
    cout << b;
}
void remFinishLine()
{
    gotoxy(56, 23);
    cout << " ";
    gotoxy(56, 24);
    cout << " ";
}

// Other Functions
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void clearScreen()
{
    cout << "Press any key to continue..";
    getch();
    system("cls");
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << s;
}

// Game Functions
string gameLevel()
{
    string level;
    cout << "1. Fast & Hard" << endl;
    cout << "2. Normal" << endl;
    cout << "3. Slow" << endl;
    cout << "Please Choose Your Level: ";
    cin >> level;
    return level;
}
string ManuList()
{
    string choice;
    cout << "1. Start Game" << endl;
    cout << "2. Level" << endl;
    cout << "3. High Scores" << endl;
    cout << "4. Exit" << endl;
    cout << endl
         << "Please Select a Option: ";
    cin >> choice;
    return choice;
}
void clearGameBeforePlay()
{
    characterX = 8;
    characterY = 7;
    health = 0;
    remEnemy1 = false;
    remEnemy2 = false;
    enemy1Timer = 0;
    enemy2Timer = 0;
}
void game()
{
    system("cls");
    maze();
    finishLine();
    printCharacter(characterX, characterY);
    while (true)
    {
        printHealth();
        characterMovement();
        enemyMovement();
        enemyFiring();
        bigEnemy();
        bigEnemySearchSystem();
        enemyRemoveDecision();

        if (remEnemy1 && remEnemy2)
        {
            remFinishLine();
        }
        if (health <= characterLife)
        {
            system("cls");
            cout << "You Lose" << endl;
            Sleep(1500);
            break;
        }
        if (characterX + 1 == 56)
        {
            system("cls");
            cout << "You Win" << endl;
            Sleep(1500);
            break;
        }
        
        enemy1Timer++;
        enemy2Timer++;

        Sleep(sleepValue);
    }
}
void characterMovement()
{
    if (GetAsyncKeyState(VK_LEFT))
    {
        moveCharacterLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
        moveCharacterRight();
    }
    if (GetAsyncKeyState(VK_UP))
    {
        moveCharacterUp();
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
        moveCharacterDown();
    }
}
void enemyMovement()
{
    if (!remEnemy1)
    {
        if (enemy1Timer == 3)
        {
            moveEnemy1();
            enemy1Timer = 0;
        }
    }
    else
    {
        eraseObject(enemy1X, enemy1Y);
    }
    if (!remEnemy2)
    {
        if (enemy2Timer == 3)
        {
            moveEnemy2();
            enemy2Timer = 0;
        }
    }
    else
    {
        eraseObject(enemy2X, enemy2Y);
    }
}
void enemyFiring()
{
    if (E1isEmpty_Right)
    {
        E1moveBullet_Right();
        E1bulletHitting_Right();
    }
    if (E1isEmpty_Left)
    {
        E1moveBullet_Left();
        E1bulletHitting_Left();
    }
    if (E2isEmpty_Right)
    {
        E2moveBullet_Right();
        E2bulletHitting_Right();
    }
    if (E2isEmpty_Left)
    {
        E2moveBullet_Left();
        E2bulletHitting_Left();
    }
}
void bigEnemy()
{
    if (BEisEmpty_Right)
    {
        BEmoveBullet_Right();
        BEbulletHitting_Right();
    }
    if (BEisEmpty_Left)
    {
        BEmoveBullet_Left();
        BEbulletHitting_Left();
    }
    if (BEisEmpty_Up)
    {
        BEmoveBullet_Up();
        BEbulletHitting_Up();
    }
    if (BEisEmpty_Down)
    {
        BEmoveBullet_Down();
        BEbulletHitting_Down();
    }
}
void bigEnemySearchSystem()
{
    upwardSearching();
    rightsideSearching();
    leftsideSearching();
    downwardSearching();
}
void enemyRemoveDecision()
{
    if (characterX == enemy1X + 2 && characterY == enemy1Y)
    {
        remEnemy1 = true;
    }
    if (characterX + 2 == enemy1X && characterY == enemy1Y)
    {
        remEnemy1 = true;
    }
    if (characterX == enemy2X + 2 && characterY == enemy2Y)
    {
        remEnemy2 = true;
    }
    if (characterX + 2 == enemy2X && characterY == enemy2Y)
    {
        remEnemy2 = true;
    }
}
void gameLevelManu()
{
    string level = gameLevel();
    if (level == "1")
    {
        characterLife = -3;
        sleepValue = 30;
    }
    if (level == "2")
    {
        characterLife = -6;
        sleepValue = 60;
    }
    if (level == "3")
    {
        characterLife = -10;
        sleepValue = 90;
    }
}

// Character
void printCharacter(int x, int y)
{
    char enemy[2][2] = {{l, l},
                        {o, o}};

    for (int idx = 0; idx < 2; idx++)
    {
        gotoxy(x, y + idx);
        for (int j = 0; j < 2; j++)
        {
            cout << enemy[idx][j];
        }
        cout << endl;
    }
}
void moveCharacterUp()
{
    char leftCharacter = getCharAtxy(characterX, characterY - 1);
    char rightCharacter = getCharAtxy(characterX + 1, characterY - 1);
    if (leftCharacter == ' ' && rightCharacter == ' ')
    {
        eraseObject(characterX, characterY);
        characterY = characterY - 1;
        printCharacter(characterX, characterY);
    }
}
void moveCharacterDown()
{
    char leftCharacter = getCharAtxy(characterX, characterY + 2);
    char rightCharacter = getCharAtxy(characterX + 1, characterY + 2);
    if (leftCharacter == ' ' && rightCharacter == ' ')
    {
        eraseObject(characterX, characterY);
        characterY = characterY + 1;
        printCharacter(characterX, characterY);
    }
}
void moveCharacterLeft()
{
    char upperCharacter = getCharAtxy(characterX - 1, characterY);
    char lowerCharacter = getCharAtxy(characterX - 1, characterY + 1);
    if (upperCharacter == ' ' && lowerCharacter == ' ')
    {
        eraseObject(characterX, characterY);
        characterX = characterX - 1;
        printCharacter(characterX, characterY);
    }
}
void moveCharacterRight()
{
    char upperCharacter = getCharAtxy(characterX + 2, characterY);
    char lowerCharacter = getCharAtxy(characterX + 2, characterY + 1);
    if (upperCharacter == ' ' && lowerCharacter == ' ')
    {
        eraseObject(characterX, characterY);
        characterX = characterX + 1;
        printCharacter(characterX, characterY);
    }
}

// Big Enemy
void upwardSearching()
{
    char checker;
    bool isEmpty = true;
    for (int idx = 0; idx < 7; idx++)
    {
        checker = getCharAtxy(26, (4 + idx));
        if (checker == ' ' || checker == '.')
        {
            isEmpty = true;
        }
        else
        {
            isEmpty = false;
            break;
        }
    }
    if (!isEmpty)
    {
        gotoxy(26, 10);
        BEgenerateBullet_Up();
    }
}
void rightsideSearching()
{
    char checker;
    bool isEmpty = true;
    for (int idx = 0; idx < 11; idx++)
    {
        checker = getCharAtxy(28 + idx, 12);
        if (checker == ' ' || checker == '.')
        {
            isEmpty = true;
        }
        else
        {
            isEmpty = false;
            break;
        }
    }
    if (!isEmpty)
    {
        gotoxy(28, 12);
        BEgenerateBullet_Right();
    }
}
void leftsideSearching()
{
    char checker;
    bool isEmpty = true;
    for (int idx = 0; idx < 12; idx++)
    {
        checker = getCharAtxy(24 - idx, 12);
        if (checker == ' ' || checker == '.')
        {
            isEmpty = true;
        }
        else
        {
            isEmpty = false;
            break;
        }
    }
    if (!isEmpty)
    {
        gotoxy(25, 12);
        BEgenerateBullet_Left();
    }
}
void downwardSearching()
{
    char checker;
    bool isEmpty = true;
    for (int idx = 0; idx < 8; idx++)
    {
        checker = getCharAtxy(26, (14 + idx));
        if (checker == ' ' || checker == '.')
        {
            isEmpty = true;
        }
        else
        {
            isEmpty = false;
            break;
        }
    }
    if (!isEmpty)
    {
        BEgenerateBullet_Down();
    }
}
/*  Towards Right   */
void BEgenerateBullet_Right()
{
    BEbulletX_Right[BEbulletCount_Right] = 28;
    BEbulletY_Right[BEbulletCount_Right] = 12;
    gotoxy(28, 12);
    cout << ".";
    BEisEmpty_Right = true;
    BEbulletCount_Right++;
}
void BEmoveBullet_Right()
{
    for (int x = 0; x < BEbulletCount_Right; x++)
    {
        char next1 = getCharAtxy(BEbulletX_Right[x] + 1, BEbulletY_Right[x]);
        if (next1 != ' ')
        {
            eraseBullet(BEbulletX_Right[x], BEbulletY_Right[x]);
            BEremBulletFromArray_Right(x);
        }
        else
        {
            eraseBullet(BEbulletX_Right[x], BEbulletY_Right[x]);
            BEbulletX_Right[x] = BEbulletX_Right[x] + 1;
            printBullet(BEbulletX_Right[x], BEbulletY_Right[x]);
        }
    }
}
void BEremBulletFromArray_Right(int index)
{
    for (int x = index; x < BEbulletCount_Right - 1; x++)
    {
        BEbulletX_Right[x] = BEbulletX_Right[x + 1];
        BEbulletY_Right[x] = BEbulletY_Right[x + 1];
    }
    BEbulletCount_Right--;
}
void BEbulletHitting_Right()
{
    for (int x = 0; x < BEbulletCount_Right; x++)
    {
        if (BEbulletX_Right[x] + 1 == characterX && (BEbulletY_Right[x] == characterY + 1))
        {
            decreaseHealth();
            eraseBullet(BEbulletX_Right[x], BEbulletY_Right[x]);
            BEremBulletFromArray_Right(x);
        }
    }
}
/*  Towards Left   */
void BEgenerateBullet_Left()
{
    BEbulletX_Left[BEbulletCount_Left] = 24;
    BEbulletY_Left[BEbulletCount_Left] = 12;
    gotoxy(24, 12);
    cout << ".";
    BEisEmpty_Left = true;
    BEbulletCount_Left++;
}
void BEmoveBullet_Left()
{
    for (int x = 0; x < BEbulletCount_Left; x++)
    {
        char next1 = getCharAtxy(BEbulletX_Left[x] - 1, BEbulletY_Left[x]);
        if (next1 != ' ')
        {
            eraseBullet(BEbulletX_Left[x], BEbulletY_Left[x]);
            BEremBulletFromArray_Left(x);
        }
        else
        {
            eraseBullet(BEbulletX_Left[x], BEbulletY_Left[x]);
            BEbulletX_Left[x] = BEbulletX_Left[x] - 1;
            printBullet(BEbulletX_Left[x], BEbulletY_Left[x]);
        }
    }
}
void BEremBulletFromArray_Left(int index)
{
    for (int x = index; x < BEbulletCount_Left - 1; x++)
    {
        BEbulletX_Left[x] = BEbulletX_Left[x + 1];
        BEbulletY_Left[x] = BEbulletY_Left[x + 1];
    }
    BEbulletCount_Left--;
}
void BEbulletHitting_Left()
{
    for (int x = 0; x < BEbulletCount_Left; x++)
    {
        if ((BEbulletX_Left[x] == characterX + 2) && (BEbulletY_Left[x] == characterY || BEbulletY_Left[x] == characterY + 1))
        {
            decreaseHealth();
            eraseBullet(BEbulletX_Left[x], BEbulletY_Left[x]);
            BEremBulletFromArray_Left(x);
        }
    }
}
/*  Towards Up   */
void BEgenerateBullet_Up()
{
    BEbulletX_Up[BEbulletCount_Up] = 26;
    BEbulletY_Up[BEbulletCount_Up] = 10;
    gotoxy(26, 10);
    cout << ".";
    BEisEmpty_Up = true;
    BEbulletCount_Up++;
}
void BEmoveBullet_Up()
{
    for (int x = 0; x < BEbulletCount_Up; x++)
    {
        char next1 = getCharAtxy(BEbulletX_Up[x], BEbulletY_Up[x] - 1);
        if (next1 != ' ')
        {
            eraseBullet(BEbulletX_Up[x], BEbulletY_Up[x]);
            BEremBulletFromArray_Up(x);
        }
        else
        {
            eraseBullet(BEbulletX_Up[x], BEbulletY_Up[x]);
            BEbulletY_Up[x] = BEbulletY_Up[x] - 1;
            printBullet(BEbulletX_Up[x], BEbulletY_Up[x]);
        }
    }
}
void BEremBulletFromArray_Up(int index)
{
    for (int x = index; x < BEbulletCount_Up - 1; x++)
    {
        BEbulletX_Up[x] = BEbulletX_Up[x + 1];
        BEbulletY_Up[x] = BEbulletY_Up[x + 1];
    }
    BEbulletCount_Up--;
}
void BEbulletHitting_Up()
{
    for (int x = 0; x < BEbulletCount_Up; x++)
    {
        if ((BEbulletX_Up[x] == characterX || BEbulletX_Up[x] - 1 == characterX) && BEbulletY_Up[x] - 2 == characterY)
        {
            decreaseHealth();
            eraseBullet(BEbulletX_Up[x], BEbulletY_Up[x]);
            BEremBulletFromArray_Up(x);
        }
    }
}
/*  Towards Down   */
void BEgenerateBullet_Down()
{
    BEbulletX_Down[BEbulletCount_Down] = 26;
    BEbulletY_Down[BEbulletCount_Down] = 14;
    gotoxy(26, 14);
    cout << ".";
    BEisEmpty_Down = true;
    BEbulletCount_Down++;
}
void BEmoveBullet_Down()
{
    for (int x = 0; x < BEbulletCount_Down; x++)
    {
        char next1 = getCharAtxy(BEbulletX_Down[x], BEbulletY_Down[x] + 1);
        if (next1 != ' ')
        {
            eraseBullet(BEbulletX_Down[x], BEbulletY_Down[x]);
            BEremBulletFromArray_Down(x);
        }
        else
        {
            eraseBullet(BEbulletX_Down[x], BEbulletY_Down[x]);
            BEbulletY_Down[x] = BEbulletY_Down[x] + 1;
            printBullet(BEbulletX_Down[x], BEbulletY_Down[x]);
        }
    }
}
void BEremBulletFromArray_Down(int index)
{
    for (int x = index; x < BEbulletCount_Down - 1; x++)
    {
        BEbulletX_Down[x] = BEbulletX_Down[x + 1];
        BEbulletY_Down[x] = BEbulletY_Down[x + 1];
    }
    BEbulletCount_Down--;
}
void BEbulletHitting_Down()
{
    for (int x = 0; x < BEbulletCount_Down; x++)
    {
        if ((BEbulletX_Down[x] == characterX || BEbulletX_Down[x] - 1 == characterX) && BEbulletY_Down[x] + 1 == characterY)
        {
            decreaseHealth();
            eraseBullet(BEbulletX_Down[x], BEbulletY_Down[x]);
            BEremBulletFromArray_Down(x);
        }
    }
}

// Enemy1
void printEnemy(int x, int y)
{
    char enemy[2][2] = {{c, e},
                        {o, o}};

    for (int idx = 0; idx < 2; idx++)
    {
        gotoxy(x, y + idx);
        for (int j = 0; j < 2; j++)
        {
            cout << enemy[idx][j];
        }
        cout << endl;
    }
}
void eraseObject(int x, int y)
{
    for (int idx = 0; idx < 2; idx++)
    {
        gotoxy(x, y + idx);
        for (int j = 0; j < 2; j++)
        {
            cout << s;
        }
        cout << endl;
    }
}
void moveEnemy1()
{
    char nextL = getCharAtxy(enemy1X - 1, enemy1Y);
    char nextR = getCharAtxy(enemy1X + 2, enemy1Y);
    if (enemy1Direction == "Left")
    {
        if (nextL == ' ' || nextL == '.')
        {
            eraseObject(enemy1X, enemy1Y);
            enemy1X--;
            printEnemy(enemy1X, enemy1Y);
            if ((enemy1Y == characterY || enemy1Y == characterY - 1) && enemy1X > characterX)
            {
                enemy1Firing();
            }
        }
        else
        {
            enemy1Direction = "Right";
        }
    }
    if (enemy1Direction == "Right")
    {
        if (nextR == ' ' || nextL == '.')
        {
            eraseObject(enemy1X, enemy1Y);
            enemy1X++;
            printEnemy(enemy1X, enemy1Y);
            if ((enemy1Y == characterY || enemy1Y == characterY - 1) && enemy1X < characterX)
            {
                enemy1Firing();
            }
        }
        else
        {
            enemy1Direction = "Left";
        }
    }
}
void enemy1Firing()
{
    if (enemy1X < characterX)
    {
        E1generateBullet_Right();
        E1isEmpty_Right = true;
    }
    if (enemy1X > characterX)
    {
        E1generateBullet_Left();
        E1isEmpty_Left = true;
    }
}
// Bullet towards Right
void E1generateBullet_Right()
{
    E1bulletX_Right[E1bulletCount_Right] = enemy1X + 2;
    E1bulletY_Right[E1bulletCount_Right] = enemy1Y;
    gotoxy(enemy1X + 2, enemy1Y);
    cout << ".";
    E1bulletCount_Right++;
}
void E1moveBullet_Right()
{
    for (int x = 0; x < E1bulletCount_Right; x++)
    {
        char next = getCharAtxy(E1bulletX_Right[x] + 1, E1bulletY_Right[x] + 1);
        char next1 = getCharAtxy(E1bulletX_Right[x] + 1, E1bulletY_Right[x]);
        if (next != ' ' || next1 != ' ')
        {
            eraseBullet(E1bulletX_Right[x], E1bulletY_Right[x]);
            E1remBulletFromArray_Right(x);
        }
        else
        {
            eraseBullet(E1bulletX_Right[x], E1bulletY_Right[x]);
            E1bulletX_Right[x] = E1bulletX_Right[x] + 1;
            printBullet(E1bulletX_Right[x], E1bulletY_Right[x]);
        }
    }
}
void E1remBulletFromArray_Right(int index)
{
    for (int x = index; x < E1bulletCount_Right - 1; x++)
    {
        E1bulletX_Right[x] = E1bulletX_Right[x + 1];
        E1bulletY_Right[x] = E1bulletY_Right[x + 1];
    }
    E1bulletCount_Right--;
}
void E1bulletHitting_Right()
{
    for (int x = 0; x < E1bulletCount_Right; x++)
    {
        if (E1bulletX_Right[x] + 1 == characterX && (E1bulletY_Right[x] == characterY || E1bulletY_Right[x] == characterY - 1))
        {
            decreaseHealth();
            eraseBullet(E1bulletX_Right[x], E1bulletY_Right[x]);
            E1remBulletFromArray_Right(x);
        }
    }
}
// Enemy 1 bullet Towards Left
void E1generateBullet_Left()
{
    E1bulletX_Left[E1bulletCount_Left] = enemy1X - 2;
    E1bulletY_Left[E1bulletCount_Left] = enemy1Y;
    gotoxy(enemy1X - 2, enemy1Y);
    cout << ".";
    E1bulletCount_Left++;
}
void E1moveBullet_Left()
{
    for (int x = 0; x < E1bulletCount_Left; x++)
    {
        char next = getCharAtxy(E1bulletX_Left[x] - 1, E1bulletY_Left[x] + 1);
        char next1 = getCharAtxy(E1bulletX_Left[x] - 1, E1bulletY_Left[x]);
        if (next != ' ' || next1 != ' ')
        {
            eraseBullet(E1bulletX_Left[x], E1bulletY_Left[x]);
            E1remBulletFromArray_Left(x);
        }
        else
        {
            eraseBullet(E1bulletX_Left[x], E1bulletY_Left[x]);
            E1bulletX_Left[x] = E1bulletX_Left[x] - 1;
            printBullet(E1bulletX_Left[x], E1bulletY_Left[x]);
        }
    }
}
void E1remBulletFromArray_Left(int index)
{
    for (int x = index; x < E1bulletCount_Left - 1; x++)
    {
        E1bulletX_Left[x] = E1bulletX_Left[x + 1];
        E1bulletY_Left[x] = E1bulletY_Left[x + 1];
    }
    E1bulletCount_Left--;
}
void E1bulletHitting_Left()
{
    for (int x = 0; x < E1bulletCount_Left; x++)
    {
        if ((E1bulletX_Left[x] - 1 == characterX || E1bulletX_Left[x] - 1 == characterX + 1) && (E1bulletY_Left[x] == characterY || E1bulletY_Left[x] == characterY - 1))
        {
            decreaseHealth();
            eraseBullet(E1bulletX_Left[x], E1bulletY_Left[x]);
            E1remBulletFromArray_Left(x);
        }
    }
}

// Enemy2
void moveEnemy2()
{
    char nextL = getCharAtxy(enemy2X - 1, enemy2Y);
    char nextR = getCharAtxy(enemy2X + 2, enemy2Y);
    if (enemy2Direction == "Left")
    {
        if (nextL == ' ' || nextL == '.')
        {
            eraseObject(enemy2X, enemy2Y);
            enemy2X--;
            printEnemy(enemy2X, enemy2Y);
            if ((enemy2Y == characterY || enemy2Y == characterY + 1) && enemy2X > characterX)
            {
                enemy2Firing();
            }
        }
        else
        {
            enemy2Direction = "Right";
        }
    }
    if (enemy2Direction == "Right")
    {
        if (nextR == ' ' || nextL == '.')
        {
            eraseObject(enemy2X, enemy2Y);
            enemy2X++;
            printEnemy(enemy2X, enemy2Y);
            if ((enemy2Y == characterY || enemy2Y == characterY + 1) && enemy2X < characterX)
            {
                enemy2Firing();
            }
        }
        else
        {
            enemy2Direction = "Left";
        }
    }
}
void enemy2Firing()
{
    if (enemy2X < characterX)
    {
        E2generateBullet_Right();
        E2isEmpty_Right = true;
    }
    if (enemy2X > characterX)
    {
        E2generateBullet_Left();
        E2isEmpty_Left = true;
    }
}
// Bullet towards Right
void E2generateBullet_Right()
{
    E2bulletX_Right[E2bulletCount_Right] = enemy2X + 2;
    E2bulletY_Right[E2bulletCount_Right] = enemy2Y;
    gotoxy(enemy2X + 2, enemy2Y);
    cout << ".";
    E2bulletCount_Right++;
}
void E2moveBullet_Right()
{
    for (int x = 0; x < E2bulletCount_Right; x++)
    {
        char next = getCharAtxy(E2bulletX_Right[x] + 1, E2bulletY_Right[x] + 1);
        char next1 = getCharAtxy(E2bulletX_Right[x] + 1, E2bulletY_Right[x]);
        if (next != ' ' || next1 != ' ')
        {
            eraseBullet(E2bulletX_Right[x], E2bulletY_Right[x]);
            E2remBulletFromArray_Right(x);
        }
        else
        {
            eraseBullet(E2bulletX_Right[x], E2bulletY_Right[x]);
            E2bulletX_Right[x] = E2bulletX_Right[x] + 1;
            printBullet(E2bulletX_Right[x], E2bulletY_Right[x]);
        }
    }
}
void E2remBulletFromArray_Right(int index)
{
    for (int x = index; x < E2bulletCount_Right - 1; x++)
    {
        E2bulletX_Right[x] = E2bulletX_Right[x + 1];
        E2bulletY_Right[x] = E2bulletY_Right[x + 1];
    }
    E2bulletCount_Right--;
}
void E2bulletHitting_Right()
{
    for (int x = 0; x < E2bulletCount_Right; x++)
    {
        if (E2bulletX_Right[x] + 1 == characterX && (E2bulletY_Right[x] == characterY || E2bulletY_Right[x] == characterY + 1))
        {
            decreaseHealth();
            eraseBullet(E2bulletX_Right[x], E2bulletY_Right[x]);
            E2remBulletFromArray_Right(x);
        }
    }
}
// Enemy 1 bullet Towards Left
void E2generateBullet_Left()
{
    E2bulletX_Left[E2bulletCount_Left] = enemy2X - 2;
    E2bulletY_Left[E2bulletCount_Left] = enemy2Y;
    gotoxy(enemy2X - 2, enemy2Y);
    cout << ".";
    E2bulletCount_Left++;
}
void E2moveBullet_Left()
{
    for (int x = 0; x < E2bulletCount_Left; x++)
    {
        char next = getCharAtxy(E2bulletX_Left[x] - 1, E2bulletY_Left[x] + 1);
        char next1 = getCharAtxy(E2bulletX_Left[x] - 1, E2bulletY_Left[x]);
        if (next != ' ' || next1 != ' ')
        {
            eraseBullet(E2bulletX_Left[x], E2bulletY_Left[x]);
            E2remBulletFromArray_Left(x);
        }
        else
        {
            eraseBullet(E2bulletX_Left[x], E2bulletY_Left[x]);
            E2bulletX_Left[x] = E2bulletX_Left[x] - 1;
            printBullet(E2bulletX_Left[x], E2bulletY_Left[x]);
        }
    }
}
void E2remBulletFromArray_Left(int index)
{
    for (int x = index; x < E2bulletCount_Left - 1; x++)
    {
        E2bulletX_Left[x] = E2bulletX_Left[x + 1];
        E2bulletY_Left[x] = E2bulletY_Left[x + 1];
    }
    E2bulletCount_Left--;
}
void E2bulletHitting_Left()
{
    for (int x = 0; x < E2bulletCount_Left; x++)
    {
        if ((E2bulletX_Left[x] - 1 == characterX || E2bulletX_Left[x] - 1 == characterX + 1) && (E2bulletY_Left[x] == characterY || E2bulletY_Left[x] == characterY + 1))
        {
            decreaseHealth();
            eraseBullet(E2bulletX_Left[x], E2bulletY_Left[x]);
            E2remBulletFromArray_Left(x);
        }
    }
}

// Health
void printHealth()
{
    gotoxy(60, 15);
    cout << "Health: " << health;
}
void decreaseHealth()
{
    health--;
}
