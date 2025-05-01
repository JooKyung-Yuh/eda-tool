#include "Resistor.hpp"
#include <cassert>
namespace eda {
	Resistor::Resistor(const std::string& nm, int a, int b, double v)
		: name(nm), n1(a), n2(b), value(v) {
		assert(value > 0);
	}
	void Resistor::stamp(MnaMatrix& M, Vector& b) const {
		double g = 1.0 / value;
		M.addConductance(n1, n1, g);
		M.addConductance(n2, n2, g);
		M.addConductance(n1, n2, -g);
		M.addConductance(n2, n1, -g);
	}
}
