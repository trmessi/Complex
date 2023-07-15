#ifndef __COMPLEX__
#define __COMPLEX__


	class Complex
	{
	public:
		Complex(const double re, const double lm = 0);

		void operator =(Complex& complex);
		~Complex();

		Complex operator +(Complex& complex);
		Complex operator *(Complex& complex);
		Complex operator /(Complex& complex);

		Complex conjugate();
		double modular();

		double getReal()const;
		double getLm()const;

	private:
		double m_re;
		double m_lm;
	};




#endif // !__COMPLEX__

