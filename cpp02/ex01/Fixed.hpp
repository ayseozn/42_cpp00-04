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

    float toFloat( void ) const;
    int toInt(void) const;

    int getRawBits() const;
    void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &o, const Fixed& fixed);

#endif


