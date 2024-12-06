#include <iostream>
#include <cmath>

struct Vector2D
{
  double x = 0.0;
  double y = 0.0;
};
struct Point
{
  double x = 0.0;
  double y = 0.0;
};

Vector2D PointDifference(Point p1, Point p2)
{
  Vector2D result;
  result.x = p1.x - p2.x;
  result.y = p1.y - p2.y;
  return result;
}

double FindLength(Vector2D v)
{
  return std::hypot(v.x, v.y);
}

Point ReadPoint()
{
  Point p;
  std::cin >> p.x >> p.y;
  return p;
}

void PrintPoint(Point p)
{
  std::cout << "{" << p.x << ", " << p.y << "}";
}

int main()
{
  Point point = ReadPoint();

  std::cout << "Read point: ";
  PrintPoint(point);
  std::cout << std::endl;

  Point point_symm = {-point.x, -point.y};

  std::cout << "Symmetric point: ";
  PrintPoint(point_symm);
  std::cout << std::endl;
}
