#pragma once

template <typename T, typename Comp> 
T minMax(T a, T b, T c, Comp comp)
{
	return comp(a, b) ? (comp(b, c) ? a : comp(c, a) ? c : a ) : (comp(b, c) ? b : c );
}

class CopmCreter
{
public:
	CopmCreter(char* creteria)
	{
		if (creteria == "Min")
		{
			m_creteria = false;
		}
		else
		{
			m_creteria = true; // Max
		}
	}

	template <typename T>
	bool operator() (const T &a, const T &b)
	{
		return (m_creteria) ? (a > b) : (a < b);
	}

private:
	bool m_creteria;
};


