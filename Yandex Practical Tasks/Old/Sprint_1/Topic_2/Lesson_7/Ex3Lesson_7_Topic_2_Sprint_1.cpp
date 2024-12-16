/*Программа, которую вы напишете, пригодится при ремонте. Она позволит рассчитать количество рулонов обоев, необходимых, чтобы обклеить комнату.*/
i
#include <iostream>
#include <cmath>

int main() {
    double length_ceil, width_ceil, height_ceil;
    double width_roll, length_roll;
    double S_ceil, S_roll, answer;

    // Ввод данных
    std::cin >> length_ceil >> width_ceil >> height_ceil >> width_roll >> length_roll;

    // Вычисление площади потолка и рулона
    S_ceil = ((length_ceil + width_ceil) * 2) * height_ceil;
    S_roll = width_roll * length_roll;

    // Подсчет количества рулонов
    answer = S_ceil / S_roll;

    // Вывод результата
    std::cout << std::ceil(answer) << std::endl;

    return 0;
}