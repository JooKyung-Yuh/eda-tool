#pragma once
#include "../solver/MnaMatrix.hpp"
#include "../solver/Vector.hpp"

namespace eda {

	class Element {
	public:
		// MNA ���(M) �� �캯 ����(b)�� �ڽ��� �⿩���� '������' �Ѵ�
		virtual void stamp(MnaMatrix& M, Vector& b) const = 0;
		virtual ~Element() = default;
	};

} // namespace eda
