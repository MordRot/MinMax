#pragma once

template <typename T>
T minMax(T a, T b, T c, char* creter)
{
	if (creter == "Max")
	{
		return (a > b) ? ((b > c) ? a : (c > a) ? c : a) : ((b > c) ? b : c);
	}
	else
	{
		return (a < b) ? ((b < c) ? a : (c < a) ? c : a) : ((b < c) ? b : c);
	}
}