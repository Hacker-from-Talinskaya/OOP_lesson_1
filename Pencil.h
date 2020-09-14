#pragma once
#include <iostream>

using namespace std;

class Pencil // класса
{
public: // модификатор доступа 
    string brand_name; // поле класса
    int radius_pen_refil;
    int height_pen_refil;

    Pencil(string brand_name, string owner_name, int radius_pen_refil, int height_pen_refil); //заголовок конструктора 1

    Pencil(string owner_name); //заголовок конструктора 2

    float UsefullPen(); // заголовк нашей функции

private: // модификатор доступа
    string owner_name; // поле класса
};

