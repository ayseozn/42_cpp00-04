#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = num << fac_bits;
}

Fixed::Fixed(const float nb_f)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(nb_f * 256);
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this == &other)
        return *this;
    this->value = other.value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float   Fixed::toFloat(void)const
{
    return (float (value) / 256);
}

int Fixed::toInt(void)const
{
    return value >> fac_bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}
