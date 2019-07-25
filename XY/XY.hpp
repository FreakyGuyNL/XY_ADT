#include <iostream>

/// @file
/// This is a simple ADT for XY coordinates.
/// It allows simple mathemetical operations for things such as coordinates.
/// As said, it's simple, but I will add things to it as I come up with them (on the spot).


class XY
{
    private:
        int x;
        int y;
    public:

/// \brief
/// Constructor for class XY
/// \details
/// This constructor takes an X and Y coordinate and assigns them to the private variables.
/// It's rather simple, of course, but documentation makes me bust a nut.
        XY(int x, int y):
            x(x),
            y(y)
            {}

/// \brief
/// Addition operator for XY
/// \details
/// This operator adds an XY instance with another XY instance and returns the added result of their respective values.
        XY operator+(const XY &rhs) const
        {
            return XY(x + rhs.x, y + rhs.y);
        }

/// \brief
/// Substractition operator for XY
/// \details
/// This operator substracts an XY instance with another XY instance and returns the substracted result of their respective values.
        XY operator-(const XY &rhs) const
        {
            return XY(x - rhs.x, y - rhs.y);
        }

/// \brief
/// Multiplication operator for XY
/// \details
/// This operator multiplies an XY instance with another XY instance and returns the multiplicated result of their respective values.
        XY operator*(const XY &rhs) const
        {
            return XY(x * rhs.x, y * rhs.y);
        }

/// \brief
/// Division operator for XY
/// \details
/// This operator divides an XY instance with another XY instance and returns the divided result of their respective values.
        XY operator/(const XY &rhs) const
        {
            return XY(x / rhs.x, y / rhs.y);
        }

/// \brief
/// Addition operator for XY
/// \details
/// This operator adds an XY instance with another XY instance and returns the left hand side as a result of the addition.
        XY operator+=(const XY &rhs)
        {
            return *this + rhs;
        }

/// \brief
/// Substraction operator for XY
/// \details
/// This operator substracts an XY instance with another XY instance and returns the left hand side as a result of the substraction.
        XY operator-=(const XY &rhs)
        {
            return *this - rhs;
        }

/// \brief
/// Multiplication operator for XY
/// \details
/// This operator multiplies an XY instance with another XY instance and returns the left hand side as a result of the multiplication.
        XY operator*=(const XY &rhs)
        {
            return *this * rhs;
        }

/// \brief
/// Division operator for XY
/// \details
/// This operator divides an XY instance with another XY instance and returns the left hand side as a result of the divisison.
        XY operator/=(const XY &rhs)
        {
            return *this / rhs;
        }

/// \brief
/// Cout operator for XY
/// \details
/// This operator allows an XY instance to be printed using std::cout in this format: "<newline> X: x <newline> Y: y".
        XY operator<<(ostream& os, const XY &xy)
        {
            os << "\nX: " << xy.x << "\nY:" << xy.y;
            return os;
        }
};