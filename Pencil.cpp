#include "Pencil.h"
#include <iostream>


using namespace std;

Pencil::Pencil(string brand_name, string owner_name, int radius_pen_refil, int height_pen_refil) // ����������� 1
{
    this->brand_name = brand_name; // ����������� �������� ������ ������
    this->owner_name = owner_name; // ����������� �������� ������ ������
    this->height_pen_refil = height_pen_refil; // ����������� �������� ������ ������
    this->radius_pen_refil = radius_pen_refil; // ����������� �������� ������ ������
}
Pencil::Pencil(string owner_name) // ����������� 2
{
    this->owner_name = owner_name; // ����������� �������� ������ ������
}
float Pencil::UsefullPen() 
{
    return this->radius_pen_refil * 3.14 * 3.14 * this->height_pen_refil / 0.25; // ����������� ��� ����� �� ���� ����� ������ 
                                                                                 //0.25 ���������� ������� ������
}
