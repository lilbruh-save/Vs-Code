#pragma once
// Передача, которую может включить автомобиль.
enum class Gear {
    PARKED,   // Режим парковки.
    DRIVE,    // Режим движения вперёд.
    REVERSE,  // Режим заднего хода.
};

// Направление движения.
enum class Direction {
    FORWARD,   // Вперёд.
    BACKWARD,  // Назад.
    STOPPED,   // Стоит на месте.
};

class Car {
public:
    inline static const int MAX_SPEED = 200;
    inline static const int MAX_REVERSE_SPEED = 30;

    // Включает двигатель автомобиля.
    void TurnEngineOn();

    // Выключает двигатель автомобиля.
    // Двигатель можно выключить, когда автомобиль в режиме парковки и его скорость равна нулю.
    // Метод возвращает true в случае успеха и false в случае, если выключить двигатель не удалось.
    bool TurnEngineOff();

    // Возвращает true, если двигатель автомобиля включён, и false — в противном случае.
    bool IsEngineOn();

    // Включает передачу new_gear. Возвращает true в случае успеха
    // и false, если переключиться не удалось.
    // Передачу можно изменить на другую, только если двигатель включён,
    // а автомобиль стоит на месте.
    // Если новая передача равна текущей, то метод возвращает true
    // вне зависимости от состояния двигателя и скорости движения
    // (водитель дотронулся до рычага, но не стал двигать его).
    bool SetGear(Gear new_gear);

    // Возвращает текущую передачу автомобиля.
    Gear GetGear();

    // Возвращает текущую скорость автомобиля.
    int GetSpeed();

    // Устанавливает текущую скорость автомобиля. Возвращает true, если желаемую скорость
    // удалось установить, и false — в противном случае.
    // Если двигатель выключен, метод возвращает false.
    // В режиме Gear::PARKED скорость может быть только равна нулю.
    // В режиме Gear::DRIVE автомобиль может ехать со скоростью от 0 до Car::MAX_SPEED.
    // В режиме Gear::REVERSE автомобиль может ехать со скоростью от 0 до Car::MAX_REVERSE_SPEED.
    bool SetSpeed(int new_speed);

    // Возвращает направление движения (вперёд, назад или стоит на месте).
    Direction GetDirection();

    // Проверяет возможность езды со скоростью speed при включённой передаче gear.
    static bool IsSpeedValidForGear(int speed, Gear gear);

    // Возвращает максимальную скорость движения на указанной передаче.
    static int GetMaxSpeedForGear(Gear gear);

private:
    bool engine_is_on_ = false;
    Gear gear_ = Gear::PARKED;
    int speed_ = 0;
};