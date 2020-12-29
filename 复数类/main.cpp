#include <iostream>

using namespace std;

class Complex
{
private:
    double real;
    double imag;
public:
    Complex(double real = 0, double imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    ~Complex()
    {
    }
    double GetReal() const
    {
        return this->real;
    }
    double GetImag() const
    {
        return this->imag;
    }
    void Print()
    {
        cout << this->real << (this->imag > 0 ? "+" : "") << this->imag << "i";
    }
    friend ostream& operator<<(ostream& output,const Complex& c)
    {
        output << c.GetReal() << (c.GetImag() > 0 ? "+" : "") << c.GetImag() << "i";
        return output;
    }
    friend istream& operator>>(istream& input, Complex& c)
    {
        double real, imag;
        input >> real >> imag;

        return input;
    }
    Complex operator-() // 取负值（一元运算符重载）
    {
        this->real = -this->real;
        this->imag = -this->imag;
    }
    Complex* operator+(const Complex& c)  // 复数相加（二元运算符重载）
    {
        Complex* result = new Complex();
        result->real = this->real + c.GetReal();
        result->imag = this->imag + c.GetImag();
        return result;
    }
    Complex* operator-(const Complex& c)
    {
        Complex* result = new Complex();
        result->real = this->real - c.GetReal();
        result->imag = this->imag - c.GetImag();
        return result;
    }
    Complex* operator*(const Complex& c)
    {
        Complex* result = new Complex();
        double a1 = this->real;
        double b1 = this->imag;
        double a2 = c.GetReal();
        double b2 = c.GetImag();
        result->real = a1 * a2 - b1 * b2;
        result->imag = a1 * b2 + a2 * b1;
        return result;
    }
    Complex* operator/(const Complex& c)
    {
        Complex* result = new Complex();
        double a1 = this->real;
        double b1 = this->imag;
        double a2 = c.GetReal();
        double b2 = c.GetImag();
        result->real = (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2);
        result->imag = (a2 * b1 - a1 * b2) / (a2 * a2 + b2 * b2);
        return result;
    }
};



int main01()
{
    Complex c1(3, 4);
    Complex c2(5, 6);


    return 0;
}