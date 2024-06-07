#pragma once
#include <iostream>
class RandomGenerator
{
public:
    int min; // ����������� ���������
    int max; // ������������

    // �����������
    RandomGenerator(int minP, int maxP)
        : min{ minP }, max{ maxP } {}
    // �������� ������� �������, ��������� ���������� ����� � ���������
    int operator()() {
        return rand() % (max - min + 1) + min;
    }
};