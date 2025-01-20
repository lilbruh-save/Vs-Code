/*Мини-калькулятор (с учётом приоритета операций)

Идея: Парсить выражение наподобие "3 + 5 * 2" с учётом приоритетов * и +.
Навык: Базовый парсинг, оператор switch, корректная работа с циклами и условиями.*/

//IDEA Проанализировать код;

#include <iostream>
#include <string>
#include <cctype> // Для проверки символов isdigit и isspace

using namespace std;

// Функция для обработки выражения с учётом приоритета операций
int parseExpression(const string &expr, size_t &index);
int parseTerm(const string &expr, size_t &index);
int parseFactor(const string &expr, size_t &index);

// Парсинг выражения (сложение и вычитание)
int parseExpression(const string &expr, size_t &index) {
    int result = parseTerm(expr, index);

    while (index < expr.length()) {
        char op = expr[index];

        if (op == '+' || op == '-') {
            ++index; // Пропускаем оператор
            int nextTerm = parseTerm(expr, index);

            if (op == '+') result += nextTerm;
            else result -= nextTerm;
        } else {
            break; // Если это не '+' или '-', выходим
        }
    }

    return result;
}

// Парсинг термов (умножение и деление)
int parseTerm(const string &expr, size_t &index) {
    int result = parseFactor(expr, index);

    while (index < expr.length()) {
        char op = expr[index];

        if (op == '*' || op == '/') {
            ++index; // Пропускаем оператор
            int nextFactor = parseFactor(expr, index);

            if (op == '*') result *= nextFactor;
            else if (op == '/') result /= nextFactor;
        } else {
            break; // Если это не '*' или '/', выходим
        }
    }

    return result;
}

// Парсинг факторов (числа и скобки)
int parseFactor(const string &expr, size_t &index) {
    int result = 0;

    // Пропускаем пробелы
    while (index < expr.length() && isspace(expr[index])) {
        ++index;
    }

    if (expr[index] == '(') {
        ++index; // Пропускаем '('
        result = parseExpression(expr, index);
        ++index; // Пропускаем ')'
    } else {
        while (index < expr.length() && isdigit(expr[index])) {
            result = result * 10 + (expr[index] - '0');
            ++index;
        }
    }

    // Пропускаем пробелы после числа или скобки
    while (index < expr.length() && isspace(expr[index])) {
        ++index;
    }

    return result;
}

int main() {
    string expression;
    cout << "Введите математическое выражение: ";
    getline(cin, expression);

    size_t index = 0;
    try {
        int result = parseExpression(expression, index);
        cout << "Результат: " << result << endl;
    } catch (...) {
        cout << "Ошибка при разборе выражения." << endl;
    }

    return 0;
}


}