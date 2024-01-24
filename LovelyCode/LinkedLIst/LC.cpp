#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    char l[4][5];
    int f;
    for (int i = 0; i < 4; i++)
        gets(l[i]);
    for (int i = 0; i < 4; i++)
    {
        f = 0;
        for (int j = 0; j < i - 1; j++)
        {
            if (l[i][1] == l[j][1] && l[i][4] == l[j][4] || l[i][1] == l[j][4] && l[i][4] == l[j][1])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            for (int j = 0; j < 5; j++)
                cout << l[i][j];
        }
      cout<<"\t";
    }
    return 0;
}