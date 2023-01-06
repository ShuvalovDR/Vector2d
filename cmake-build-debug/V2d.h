#ifndef LAB5CLASSES_V2D_H
#define LAB5CLASSES_V2D_H


class V2d {
public:
    double x, y;

    V2d();
    V2d(double _x, double _y);

    double getLen() const;
    V2d PSC();
    void Print() const;

    void setX(double _x);
    double getX() const;
    void setY(double _y);
    double getY() const;
    static double kos_scalar_pr(const V2d& vector1, const V2d& vector2);
    static V2d norm(const V2d& vector);

    double getPhi() const;
    V2d operator+(const V2d& vector) const;
    V2d operator+=(const V2d& vector);
    V2d operator*(const double & a) const;
    V2d operator*=(const double & a);
    V2d operator/=(const double & a);
    V2d operator/(const double & a) const;
    V2d operator-(const V2d& vector) const;
    V2d operator-=(const V2d& vector);
    double operator*(const V2d& vector) const;
    double operator*=(const V2d& vector) const;
    bool operator==(const V2d& vector) const;
    bool operator!=(const V2d& vector) const;
    static V2d change_length(const V2d& vector, const double& a);
    static V2d change_angle(const V2d& vector, const double& a);
    static double cos_distance(const V2d& vector1, const V2d& vector2);




};


#endif //LAB5CLASSES_V2D_H
