#pragma once
#include <iostream>
using namespace std;

class cosToTaylor
{
private:
	int a;
	int n;
public:
	cosToTaylor();
	friend istream& operator >> (istream& in, cosToTaylor& ctt)
	{
		cout << "¬ведите A: ";
		in >> ctt.a;
		cout << "¬ведите количество слагаемых в разложении: ";
		in >> ctt.n;
		cout << endl;
		return in;
	}
	friend ostream& operator << (ostream& out, const cosToTaylor& ctt)
	{
		int factor = 1;
		int factorS = 1;
		int coeff = 1;
		int sign = 1;
		out << 1;
		for (int i = 1; i <= ctt.n; i++)
		{
			factor *= (2 * i - 1)*(2 * i);
			factorS *= (2 * i)*(2 * i+1);
			coeff *= ctt.a;
			sign *= -1;
			if (sign > 0)
				out << " + ";
			else
				out << " - ";
			out << "(" << coeff << "(x ^ " << 2 * i << ") / " << factor << " + " << "(" << coeff << "(x ^ " << 2 * i + 1 << ") / " << factorS;
		}
		out << endl;
		return out;
	}
};

cosToTaylor::cosToTaylor()
{
	a = 0;
	n = 0;
}