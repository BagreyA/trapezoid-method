#include <iostream>
#include <cmath>

double f(double x) {
    return x * x;
}

double trapezoidalIntegration(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }
    return sum * h;
}

int main() {
    double a = 0.0;
    double b = 1.0;
    int n = 10;
    double result = trapezoidalIntegration(a, b, n);
    std::cout << "Результат численного интегрирования: " << result << std::endl;
    return 0;
}
