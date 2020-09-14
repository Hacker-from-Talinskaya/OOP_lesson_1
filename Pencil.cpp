#include "Pencil.h"
#include <iostream>


using namespace std;

Pencil::Pencil(string brand_name, string owner_name, int radius_pen_refil, int height_pen_refil) // конструктор 1
{
    this->brand_name = brand_name; // присваиваем значения нашему классу
    this->owner_name = owner_name; // присваиваем значения нашему классу
    this->height_pen_refil = height_pen_refil; // присваиваем значения нашему классу
    this->radius_pen_refil = radius_pen_refil; // присваиваем значения нашему классу
}
Pencil::Pencil(string owner_name) // конструктор 2
{
    this->owner_name = owner_name; // присваиваем значения нашему классу
}
float Pencil::UsefullPen() 
{
    return this->radius_pen_refil * 3.14 * 3.14 * this->height_pen_refil / 0.25; // предположим что ручка на одно слово тратит 
                                                                                 //0.25 кубических еденицы чернил
}
