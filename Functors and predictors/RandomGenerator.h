#pragma once
#include <iostream>
class RandomGenerator
{
public:
    int min; // минимальная генерация
    int max; // максимальная

    // конструктор
    RandomGenerator(int minP, int maxP)
        : min{ minP }, max{ maxP } {}
    // оператор функция объекта, генерация случайного числа в диапазоне
    int operator()() {
        return rand() % (max - min + 1) + min;
    }
};