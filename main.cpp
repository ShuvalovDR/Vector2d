#include <iostream>
#include "cmake-build-debug/V2d.h"

int main() {
    V2d a(2, 1);
    V2d b(3, 5);
    auto a1 = a;
    auto b1 = b;
    std::cout << "Polar system \n";
    a.PSC(); //перевод в ПСК
    std::cout << "addition \n";
    auto c = a + b; //сложение векторов
    c.Print();
    std::cout << "addition \n";
    c += a;
    c.Print(); //сложение векторов
    auto d = b - a;
    std::cout << "subtraction \n";
    d.Print();
    d -= a;
    std::cout << "subtraction \n";
    d.Print();
    std::cout << "Multiplication on scalar\n";
    (a * 5).Print();
    a *= 2;
    std::cout << "Multiplication on scalar\n";
    a.Print();
    std::cout << "Division on scalar\n";
    b = b/2;
    b.Print();
    std::cout << "Division on scalar\n";
    b /= 5;
    b.Print();
    std::cout << "Scalar multiplication\n";
    std::cout << a1 * b1 << std::endl;
    std::cout << "Check equality\n";
    if (a1 == b1){
        std::cout << "1" << std::endl;
    }
    else{
        std::cout << "0" << std::endl;
    }
    if (a1 != b1){
        std::cout << "0" << std::endl;
    }
    else{
        std::cout << "1" << std::endl;
    }
    std::cout << "Kosoye scalar multiplication\n";
    std::cout << V2d::kos_scalar_pr(a1, b1) << std::endl;
    std::cout << "Normilize vector\n";
    auto norm_b1 = V2d::norm(b1);
    norm_b1.Print();
    std::cout << "Change length\n";
    auto b1_changed_length = V2d::change_length(b1, 1000);
    b1_changed_length.Print();
    std::cout << "Change angle\n";
    auto b1_changed_angle = V2d::change_angle(b1, 1);
    b1_changed_angle.Print();
    std::cout << "cos distance \n";
    std::cout << V2d::cos_distance(a1, b1) << std::endl;

}
