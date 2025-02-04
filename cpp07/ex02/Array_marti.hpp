#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstring>
# include <exception>
# include <cstdlib>

template <typename T>
class Array
{
private:
	T	*_arr;
	int	_size;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();

	Array	&operator=(const Array &other);
	T		&operator[](int idx);
	const T	&operator[](int idx) const;

	int		size(void) const;
};

template <typename T>
Array<T>::Array(): _size(0)
{
	this->_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	this->_arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array &other)
{
	if (this != &other)
	{
		this->_size = other.size();
		this->_arr = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			this->_arr[i] = other[i];
		}
		
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		if (_arr)
			delete[] _arr;
		this->_size = other.size();
		this->_arr = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			this->_arr[i] = other[i];
		}
		
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](int idx)
{
	if (idx < 0 || idx >= _size)
		throw std::exception();
	
	return (_arr[idx]);
}

template <typename T>
const T	&Array<T>::operator[](int idx) const
{
	try
	{
		if (idx < 0 || idx >= _size)
			throw std::exception();
		
		return (_arr[idx]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}
}

template <typename T>
int	Array<T>::size(void) const
{
	return (_size);
}

#endif