// lekcja 2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.


#include <iostream>
using namespace std;
int main()
{
    int tab[10][10];
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tab[i][j] = 0;
        }
    }
    for (int p = 0; p < 10; p++) {
        tab[p][p] = 1;
    }
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            cout << tab[a][b];
        }
        cout << endl;
    }

    
}