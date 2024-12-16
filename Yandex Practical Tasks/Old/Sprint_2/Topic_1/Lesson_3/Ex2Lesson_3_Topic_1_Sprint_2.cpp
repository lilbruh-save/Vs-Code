/*Опишите структуру TextWithStyle, задающую текст и его представление:
    size — размер шрифта (число int), по умолчанию — 8.
    color — цвет текста (значение RGBAColor), по умолчанию — чёрный (0, 0, 0, 1).
    position — позиция на холсте (значение Point), по умолчанию — 100, 100.
    is_bold — флаг жирного текста (значение bool), по умолчанию — true.
    is_italic — флаг курсивного текста (значение bool), по умолчанию — false.
    text — сам текст (значение std::string), по умолчанию — Specify text.
Используйте такой main, чтобы проверить своё решение.*/
#include <cassert>
#include <string>

using namespace std::literals;

struct Point {
     double x = 0;
     double y = 0;
};

struct RGBAColor {
    float red{};
    float green{};
    float blue{};
    float alpha = 1;
};

struct TextWithStyle
{
  int size = 8;
  RGBAColor color = {0, 0, 0, 1};
  Point position = {100, 100};
  bool is_bold = true;
  bool is_italic = false;
  std::string text = "Specify text."s;
};


int main() {
    TextWithStyle text_with_style;

    assert(text_with_style.size == 8);

    assert(text_with_style.color.red == 0.f);
    assert(text_with_style.color.green == 0.f);
    assert(text_with_style.color.blue == 0.f);
    assert(text_with_style.color.alpha == 1.f);

    assert(text_with_style.position.x == 100.);
    assert(text_with_style.position.y == 100.);

    assert(text_with_style.is_bold);
    assert(!text_with_style.is_italic);

    assert(text_with_style.text == "Specify text"s);
}