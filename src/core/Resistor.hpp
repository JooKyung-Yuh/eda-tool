#pragma once
#include "Element.hpp"
namespace eda {
	class Resistor : public Element {
		std::string name;
		int n1, n2;
		double value;
	public:
		Resistor(const std::string& name, int n1, int n2, double value);
		void stamp(MnaMatrix& M, Vector& b) const override;
	};
}
