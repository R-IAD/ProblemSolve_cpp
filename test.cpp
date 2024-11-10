#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int image;

public:
    Complex()
    {
        real = 0;
        image = 0;
    }

    ~Complex()
    {
        cout << "Destructor" << endl;
    }

    void add(Complex c1, Complex c2);
    void sub(Complex c1, Complex c2);
    void SetReal(int n);
    void SetImag(int n);
    int Print_CPLX(void)
    {
        cout << real << " + " << image << "i" << endl;
    }
};

void Complex::SetImag(int n)
{
    image = n;
}

void Complex::SetReal(int n)
{
    real = n;
}

void Complex::add(Complex c1, Complex c2)
{
    real = c1.real + c2.real;
    image = c1.image + c2.image;
}

void Complex::sub(Complex c1, Complex c2)
{
    real = c1.real - c2.real;
    image = c1.image - c2.image;
}

int main()
{
    Complex c1, c2, c3;
    c1.SetImag(10);
    c1.SetReal(10);
    c2.SetImag(10);
    c2.SetReal(10);

    c3.Print_CPLX();
    c3.add(c1, c2);
    c3.Print_CPLX();
}