#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const int num)
{
    this->value = num << fac_bits;
}

Fixed::Fixed(const float nb_f)
{
    this->value = roundf(nb_f * 256);
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if(this == &other)
        return *this;
    this->value = other.value;
    return *this;
}

Fixed::~Fixed()
{
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


bool    Fixed::operator<(Fixed const& fixed)const
{
    if(this->value < fixed.value)
        return(true);
    return(false);
}
bool    Fixed::operator>(Fixed const& fixed)const
{
    if(this->value > fixed.value)
        return(true);
    return(false);
}
bool    Fixed::operator>=(Fixed const& fixed)const
{
    if(this->value >= fixed.value)
        return(true);
    return(false);
}
bool    Fixed::operator<=(Fixed const& fixed)const
{
    if(this->value <= fixed.value)
        return(true);
    return(false);
}
bool    Fixed::operator==(Fixed const& fixed)const
{
    if(this->value == fixed.value)
        return(true);
    return(false);
}
bool    Fixed::operator!=(Fixed const& fixed)const
{
    if(this->value != fixed.value)
        return(true);
    return(false);
}


Fixed   Fixed::operator+(Fixed const& other)const
{
    Fixed s(this->toFloat() + other.toFloat());
    return(s);
}
Fixed   Fixed::operator-(Fixed const& other)const
{
    Fixed s(this->toFloat() - other.toFloat());
    return(s);
}
Fixed   Fixed::operator*(Fixed const& other)const
{
    Fixed s(this->toFloat() * other.toFloat());
    return(s);
}
Fixed   Fixed::operator/(Fixed const& other)const
{
    Fixed s(this->toFloat() / other.toFloat());
    return(s);
}


Fixed   &Fixed::operator++()
{
    this->value++;
    return(*this);
}
Fixed   Fixed::operator++(int)
{
    Fixed a(this->toFloat());
    this->value++;
    return(a);
}
Fixed   &Fixed::operator--()
{
    this->value--;
    return(*this);
}
Fixed   Fixed::operator--(int)
{
    Fixed a(this->toFloat());
    this->value--;
    return(a);
}


Fixed  &Fixed::max(Fixed &a, Fixed &b)
{
    return(a > b) ? a : b;
}
Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a:b;
}
const   Fixed   &Fixed::max(const Fixed &a, const Fixed &b)
{
    return(a > b) ? a:b;
}
const    Fixed   &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a:b;
}
