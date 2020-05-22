#include <iostream>
#include <string_view>
class Base
{
	protected:
		int m_value;
	public:
		Base(int value)
			:m_value{value} {}
		std::string_view getName() const {return "Base";}
		int getValue() const {return m_value;}
};

class Derived: public Base
{
	public:
		Derived(int value)
			: Base{ value }
		{}
		std::string_view getName() const { return "Dervied"; }
		int getValueDOubled() const { return m_value*2; }
};

int main()
{
	Derived derived{ 5 };
		std::cout << derived.getName() << derived.getValue() << '\n';
		Derived &rDerived{ derived };
		std::cout << rDerived.getName() << rDerived.getValue() << '\n';
		Derived *pDerived{ &derived };
		std::cout << pDerived->getName() << pDerived->getValue() << '\n';
		Base &rBase{ derived };
		Base *pBase { &derived };
		std::cout << derived.getName() << derived.getValue() << '\n';
		std::cout << rBase.getName() << rBase.getValue() << '\n';
		std::cout << pBase->getName() << pBase->getValue() << '\n';
		return 0;
	}

