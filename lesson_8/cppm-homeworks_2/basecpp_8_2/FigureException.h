#pragma once
#include <exception>
#include<string>



class FigureException : public std::exception {
private:
	std::string m_error;

public:
	FigureException(std::string error)/*: m_error(error)	*/
	{
		m_error = error;
	}
	virtual const char* what() const noexcept { return m_error.c_str(); }
};
