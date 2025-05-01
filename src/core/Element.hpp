#pragma once
#include "../solver/MnaMatrix.hpp"
#include "../solver/Vector.hpp"

namespace eda {

	class Element {
	public:
		// MNA 행렬(M) 과 우변 벡터(b)에 자신의 기여값을 '스탬핑' 한다
		virtual void stamp(MnaMatrix& M, Vector& b) const = 0;
		virtual ~Element() = default;
	};

} // namespace eda
