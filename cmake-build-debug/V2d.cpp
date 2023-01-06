#include "V2d.h"
#include <iostream>
#include <cmath>

V2d::V2d(): x(0.0), y (0.0) {};
V2d::V2d(double _x, double _y): x(_x), y (_y) {};

void V2d::setX(double _x){
    x = _x;
}
void V2d::setY(double _y){
    y = _y;
}

double V2d::getX() const{
    return x;
}
double V2d::getY() const{
    return y;
}

double V2d::getLen() const{
    return std::sqrt(x*x + y*y);
}
V2d V2d::PSC(){
    double pi = 3.1415;
    double length = getLen();
    double angle = getPhi();
    V2d v;
    v.setX(length);
    v.setY(angle);
    std :: cout << "length: " << length << "\n" << "angle in degrees: " << angle * 180 / pi << std::endl;
    return v;
}
void V2d::Print() const {
    std::cout << x << ", " << y << std::endl;
}
V2d V2d::norm(const V2d &vector) {
    double pi = 3.1415;
    double angle = std::atan2(vector.y, vector.x);
    V2d v;
    double x1 = std::cos(angle);
    double x2 = std::sin(angle);
    v.setX(x1);
    v.setY(x2);
    return v;
}
V2d V2d::change_length(const V2d &vector, const double& a) {
    double angle = std::atan2(vector.y, vector.x);
    V2d v;
    double x1 = a * std::cos(angle);
    double y1 = a * std::sin(angle);
    v.setX(x1);
    v.setY(y1);
    return v;
}
V2d V2d::change_angle(const V2d &vector, const double& a) {
    double length = std::sqrt(vector.x * vector.x + vector.y * vector.y);
    V2d v;
    double x1 = length * std::cos(a);
    double y1 = length * std::sin(a);
    v.setX(x1);
    v.setY(y1);
    return v;
}
double V2d::cos_distance(const V2d &vector1, const V2d &vector2) {
    double lenght1 = std::sqrt(vector1.x * vector1.x + vector1.y * vector1.y);
    double lenght2 = std::sqrt(vector2.x * vector2.x + vector2.y * vector2.y);
    double scalar_multiplication = vector1.x * vector2.x + vector1.y * vector2.y;
    double cos_dist = scalar_multiplication / (lenght1 * lenght2);
    return cos_dist;
}

double V2d::getPhi() const{
    return std::atan2(y, x);
}
double V2d::kos_scalar_pr(const V2d& vector1, const V2d& vector2) {
    return vector1.x * vector2.y + vector1.y * vector2.x;
}
V2d V2d::operator+(const V2d& vector) const{
    return V2d(x + vector.x, y + vector.y);
}
V2d V2d::operator+=(const V2d& vector) {
    x = x + vector.x;
    y = y + vector.y;
    return vector;
}
V2d V2d::operator-(const V2d& vector) const{
    return V2d(x - vector.x, y - vector.y);
}
V2d V2d::operator-=(const V2d& vector) {
    x = x - vector.x;
    y = y - vector.y;
    return vector;
}

V2d V2d::operator*(const double& a) const{
    return V2d(x * a, y * a);
}
V2d V2d::operator*=(const double& a) {
    x = x * a;
    y = y * a;
}
double V2d::operator*(const V2d& vector) const{
    return x * vector.x + y * vector.y;
}
double V2d::operator*=(const V2d& vector) const{
    return x * vector.x + y * vector.y;
}

V2d V2d::operator/(const double& a) const{
    return V2d(x / a, y / a);
}
V2d V2d::operator/=(const double& a) {
    x = x / a;
    y = y / a;
}
bool V2d::operator==(const V2d& vector) const {
    return (x == vector.x) && (y == vector.y);
}
bool V2d::operator!=(const V2d& vector) const {
    return (x != vector.x) || (y != vector.y);
}
