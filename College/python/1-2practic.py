# Практическая работа №1-2

# Задание 1: Найти значение функции y = 2x + 5
def calculate_y1(x):
    return 2 * x + 5

try:
    print("Задание 1: Найти значение функции y = 2x + 5")
    x = float(input("Введите значение x для функции y = 2x + 5: "))
    y = calculate_y1(x)
    print(f"Значение функции y = 2x + 5 при x = {x} равно {y}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 2: Найти значение функции y = 3x^6 - 6x^2 - 7
def calculate_y2(x):
    return 3 * x**6 - 6 * x**2 - 7

try:
    print("\nЗадание 2: Найти значение функции y = 3x^6 - 6x^2 - 7")
    x = float(input("Введите значение x для функции y = 3x^6 - 6x^2 - 7: "))
    y = calculate_y2(x)
    print(f"Значение функции y = 3x^6 - 6x^2 - 7 при x = {x} равно {y}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Самостоятельная работа

# Задание 1: Вычислить значения функции y = 4(x-3)^6 - 7(x-3)^3 + 2
def calculate_function(x):
    return 4 * (x - 3)**6 - 7 * (x - 3)**3 + 2

try:
    print("\nСамостоятельная работа, Задание 1: Вычислить значения функции y = 4(x-3)^6 - 7(x-3)^3 + 2")
    x = float(input("Введите значение x для функции y = 4(x-3)^6 - 7(x-3)^3 + 2: "))
    y = calculate_function(x)
    print(f"Значение функции при x = {x}: y = {y}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 2: Найти диаметр окружности при заданном радиусе
def calculate_diameter(radius):
    return 2 * radius

try:
    print("\nСамостоятельная работа, Задание 2: Найти диаметр окружности при заданном радиусе")
    r = float(input("Введите радиус окружности: "))
    d = calculate_diameter(r)
    print(f"Диаметр окружности с радиусом {r} равен {d}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 3: Найти среднее геометрическое двух чисел
import math

def geometric_mean(a, b):
    return math.sqrt(a * b)

try:
    print("\nСамостоятельная работа, Задание 3: Найти среднее геометрическое двух чисел")
    a = float(input("Введите первое число: "))
    b = float(input("Введите второе число: "))
    result = geometric_mean(a, b)
    print(f"Среднее геометрическое чисел {a} и {b} равно {result}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 4: Найти гипотенузу прямоугольного треугольника

def calculate_hypotenuse(a, b):
    return math.sqrt(a**2 + b**2)

try:
    print("\nСамостоятельная работа, Задание 4: Найти гипотенузу прямоугольного треугольника")
    a = float(input("Введите первый катет: "))
    b = float(input("Введите второй катет: "))
    hypotenuse = calculate_hypotenuse(a, b)
    print(f"Гипотенуза треугольника с катетами {a} и {b} равна {hypotenuse}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 5: Найти следующее и предыдущее целое число
try:
    print("\nСамостоятельная работа, Задание 5: Найти следующее и предыдущее целое число")
    n = int(input("Введите целое число: "))
    print(f"Следующее за числом {n} число: {n + 1}")
    print(f"Предыдущее число перед {n}: {n - 1}")
except ValueError:
    print("Ошибка: введите целое число.")

# Задание 6: Найти периметр квадрата

def square_perimeter(side):
    return 4 * side

try:
    print("\nСамостоятельная работа, Задание 6: Найти периметр квадрата")
    side = float(input("Введите сторону квадрата: "))
    perimeter = square_perimeter(side)
    print(f"Периметр квадрата со стороной {side} равен {perimeter}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 7: Найти среднее арифметическое двух чисел

def arithmetic_mean(a, b):
    return (a + b) / 2

try:
    print("\nСамостоятельная работа, Задание 7: Найти среднее арифметическое двух чисел")
    a = float(input("Введите первое число: "))
    b = float(input("Введите второе число: "))
    result = arithmetic_mean(a, b)
    print(f"Среднее арифметическое чисел {a} и {b} равно {result}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 8: Найти периметр прямоугольного треугольника

def triangle_perimeter(a, b):
    hypotenuse = math.sqrt(a**2 + b**2)
    return a + b + hypotenuse

try:
    print("\nСамостоятельная работа, Задание 8: Найти периметр прямоугольного треугольника")
    a = float(input("Введите первый катет: "))
    b = float(input("Введите второй катет: "))
    perimeter = triangle_perimeter(a, b)
    print(f"Периметр треугольника с катетами {a} и {b} равен {perimeter}")
except ValueError:
    print("Ошибка: введите числовое значение.")

# Задание 9: Приветствие
print("\nСамостоятельная работа, Задание 9: Приветствие")
name = input("Введите ваше имя: ")
print(f"Привет, {name}!")
