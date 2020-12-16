#include <iostream>
#include "windows.h"
#include <time.h>
using namespace std;
void main()
{
    int i, k, n=0;
    int mas[11];
    srand(time(NULL));
    for (int i = 0; i < 11; i++)
    {
        mas[i] = rand() % (101) - 50;
         cout << mas[i] << ' ';
    } cout << endl;
    for (int i = 0; i < 11; i++)
    {
        if (i % 2 == 0 && i != 0)cout << mas[i] << ' ';
    } cout << endl;
    for (int i = 0; i < 11; i++)
    {
        if (mas[i] < 0 && n<i) n = i;
    } cout << n;
}
-----------------------------------------
#include <iostream>
#include "windows.h"
#include <time.h>
using namespace std;
void main()
{
    int i, k, n=0;
    int mas[11] = {6,84,11,-3,-16,7,18,-9,10,15,0};
    srand(time(NULL));
    for (int i = 0; i < 11; i++)
    {
         cout << mas[i] << ' ';
    } cout << endl;
    for (int i = 0; i < 11; i++)
    {
        if (i % 2 == 0 && i != 0)cout << mas[i] << ' ';
    } cout << endl;
    for (int i = 0; i < 11; i++)
    {
        if (mas[i] < 0 && n<i) n = i;
    } cout << n;
}