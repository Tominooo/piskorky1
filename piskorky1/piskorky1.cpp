// piskorky1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
void Draw()
{
    system("cls");
    cout << "Piskorky na Kysucu" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "Teraz je " << player << " na rade " << "Stlacte cislo pola: ";
    cin >> a;
    if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout << "Toto pole je uz zabrate!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout << "Toto pole je uz zabrate!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout << "Toto pole je uz zabrate!s" << endl;
            Input();
        }