#pragma once
#include <iostream>

using namespace std;

class Pencil // ������
{
public: // ����������� ������� 
    string brand_name; // ���� ������
    int radius_pen_refil;
    int height_pen_refil;

    Pencil(string brand_name, string owner_name, int radius_pen_refil, int height_pen_refil); //��������� ������������ 1

    Pencil(string owner_name); //��������� ������������ 2

    float UsefullPen(); // �������� ����� �������

private: // ����������� �������
    string owner_name; // ���� ������
};

