#include "Complex.h"
#include <cmath>


    Complex::Complex(const double re, const double lm) :m_re(re), m_lm(lm)
    {
    }

    void Complex::operator=(Complex& complex)
    {
        if (!(this == &complex))
        {
            this->m_re = complex.m_re;
            this->m_lm = complex.m_lm;
        }
        return;
    }

    Complex::~Complex()
    {
    }

    Complex Complex::operator+(Complex& complex)
    {
        return Complex(this->m_re + complex.m_re, this->m_lm + complex.m_lm);
    }

    Complex Complex::operator*(Complex& complex)
    {
        return Complex((this->m_re) * (complex.m_re) - (this->m_lm) * (complex.m_lm),
            (this->m_re) * (complex.m_re) + (this->m_lm) * (complex.m_lm));
    }

    Complex Complex::operator/(Complex& complex)
    {
        return Complex(((this->m_re) * (complex.m_re) + (this->m_lm) * (complex.m_lm)) / (std::pow(complex.m_re, 2) + std::pow(complex.m_lm, 2)),
            ((this->m_lm) * (complex.m_re) - (this->m_re) * (complex.m_lm)) / (std::pow(complex.m_re, 2) + std::pow(complex.m_lm, 2)));
    }

    Complex Complex::conjugate()
    {
        return Complex(this->m_re, -this->m_lm);
    }

    double Complex::modular()
    {
        return std::sqrt(std::pow(this->m_re, 2) + std::pow(this->m_lm, 2));
    }

    double Complex::getReal() const
    {
        return this->m_re;
    }

    double Complex::getLm() const
    {
        return this->m_lm;
    }



