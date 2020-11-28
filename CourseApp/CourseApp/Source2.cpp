// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Header.h"
using namespace std;
class Square
{
private:
    int size;
    char** array;
    bool d;
    int x = 0, y = 0;
public:
    Square(int s)
    {
        size = s;
        cout << "Do you wanna to draw a diagonal ?" << "\nAnswer '1'- Draw a diagonal" << "\nAnswer '0'- Don't draw a diagonal" << endl;
        array = new char* [size];
        for (int i = 0; i < size; i++) {
            array[i] = new char[size];
            for (int j = 0; j < size; j++) {
                array[i][j] = '*';
    } 
   
    array = new char* [size];
    for (int i = 0; i < size; i++) {
        array[i] = new char[size];
        for (int j = 0; j < size; j++) {
            array[i][j] = '*';
        };
    };
}
void drawDiagonal() {
    if (d == 1)
        for (int i = 0; i < size + y; i++) {
            for (int j = 0; j < size + x; j++) {
                if (i < y or j < x) {
                    cout << ' ' << ' ';
                }
                else {
                    if (i == y || i == size + y - 1 || j == x || j == size + x - 1 || j - x == i - y)
                        cout << array[i - y][j - x] << ' ';
                    else cout << "  ";
                }
            };
            cout << '\n';
        };
};
void nodrawDiagonal() {
    if (d == 0)
        for (int i = 0; i < size + y; i++) {
            for (int j = 0; j < size + x; j++) {
                if (i < y or j < x) {
                    cout << ' ' << ' ';
                }
                else {
                    if (i == y || i == size + y - 1 || j == x || j == size + x - 1)
                        cout << array[i - y][j - x] << ' ';
                    else cout << "  ";
                }
            };
            cout << '\n';
        };
};
void set(int a, int b) {
    (int x, int y) {
    offsetX = —x;
    offsetY = —y;
}
}
};
int main()
{
    Square newSquare(20);
    newSquare.set(20, 7);
    newSquare.drawDiagonal();
    newSquare.nodrawDiagonal();
    return 0;
    // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file