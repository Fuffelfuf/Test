﻿// ConsoleApplication-4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include<iomanip>
#include"windows.h"
using namespace std;
int main()
{
    FILE* f;
    FILE* d;
    int i, j, a=0,b;
    char name_in_f[] = "input.txt";
    char name_in_d[] = "input1.txt";
    int mas[3][3];
    errno_t err;
    err = fopen_s(&f, name_in_f, "w");
    err = fopen_s(&d, name_in_d, "w");
    if (f!=0)
    srand(time(0));
            for (j = 0; j < 3; j++)
            {
                for (int i = 0; i < 3; i++)
                {
                    
                    mas[i][j] = rand()%200;
                    
                    fprintf(f, "%d%c", mas[i][j], ' ');
                    cout << mas[i][j] << ' ';
                    if (mas[i][j] > a) a = mas[i][j];
                } 
                if (d != 0)
                cout << "max=" << a << endl;
                fprintf(f, "\n");
                fprintf(d, "max=%d\n",a);
                a = 0;
        }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
