#ifndef FİXED_HPP
#define FİXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int fac_bits = 8;
public:
    Fixed();
    Fixed(const int num);
    Fixed(const float nb_f);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt(void) const;

    bool    operator<(Fixed const& fixed)const;
    bool    operator>(Fixed const& fixed)const;
    bool    operator>=(Fixed const& fixed)const;
    bool    operator<=(Fixed const& fixed)const;
    bool    operator==(Fixed const& fixed)const;
    bool    operator!=(Fixed const& fixed)const;

    Fixed operator+(Fixed const& other)const;
    Fixed operator-(Fixed const& other)const;
    Fixed operator*(Fixed const& other)const;
    Fixed operator/(Fixed const& other)const;

    Fixed   &operator++();
    Fixed   operator++(int);
    Fixed   &operator--();
    Fixed   operator--(int);

    static  Fixed   &max(Fixed &a, Fixed &b);
    static  Fixed   &min(Fixed &a, Fixed &b);

    const   static  Fixed   &max(const Fixed &a, const Fixed &b);
    const   static  Fixed   &min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, const Fixed& fixed);

#endif
