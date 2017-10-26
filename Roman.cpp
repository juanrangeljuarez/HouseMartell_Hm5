//
// Created by juan on 10/26/17.
//

#include "Roman.h"


//This helps with testing, do not modify.
void testConstructor()
{
    //Test to make sure that empty objects are set to zero.
    Roman blank;
    checkTest("testConstructor #1", 0, blank);

    //Test reading in a number.
    Roman a("LXVI");
    checkTest("testConstructor #2", 66, a);

    //Test a bigger number.
    Roman b("MMMDDCCLLXXVVII");
    checkTest("testConstructor #3", 4332, b);

}

void testOperatorPlus()
{
    //Test adding two roman objects
    Roman a("XVI");
    Roman b("MDCLXVI");
    Roman c = a + b;
    checkTest("testOperatorPlus #1", 1682, c);
    //make sure the left and right operands weren't modified
    checkTest("testOperatorPlus #2", 16, a);
    checkTest("testOperatorPlus #3", 1666, b);

    //Test adding an object with an int
    c = a + 52;
    checkTest("testOperatorPlus #4", 68, c);
    //make sure the left operand wasn't modified
    checkTest("testOperatorPlus #5", 16, a);

    //Test adding an int with an object
    c = 578 + a;
    checkTest("testOperatorPlus #6", 594, c);
    //make sure the right operand wasn't modified
    checkTest("testOperatorPlus #7", 16, a);

}

void testOperatorPlusEqual()
{
    //Test adding two roman objects
    Roman a("MLII");
    Roman b("DDCCI");
    a += b;
    checkTest("testOperatorPlusEqual #1", 2253, a);
    //make sure the right operand wasn't modified
    checkTest("testOperatorPlusEqual #2", 1201, b);

    //Test adding on an integer
    b += 17;
    checkTest("testOperatorPlusEqual #3", 1218, b);
}

void testOperatorIncrement()
{
    //Test prefix increment
    Roman a("MLII");
    Roman b("DDCCI");
    b = ++a;
    checkTest("testOperatorIncrement #1", 1053, a);
    checkTest("testOperatorIncrement #2", 1053, b);
}

void testOutput()
{
    Roman a("MDCLXVI");
    string b = a.convertToRoman();
    checkTest("testOutput #1", "MDCLXVI", b);

    //This is really the value 7.  Your code should correctly read this in and convert it back to VII.
    Roman c("IIIIIII");
    b = c.convertToRoman();
    checkTest("testOutput #2", "VII", b);

}


void testConsoleIO()
{
    //Test reading in the data using the extraction operator >>
    cout << "Enter the text CCLX: ";
    Roman a;
    cin >> a;
    checkTest("testConsoleIO #1", 260, a);

    //Test outputting data using the insertion operator <<
    cout << "testConsoleIO #2" << endl << "If this says 260, this test passed: " << a << endl;

}

//Our definitions:
/*!
 *
 * @return
 */
string Roman::convertToRoman() const
{

    return std::string();
}
/*!
 *
 */
void Roman::convertFromRoman(const string &)
{

}
/*!
 *
 * @return
 */
Roman Roman::operator+(const Roman &) const
{
    return Roman();
}
/*!
 *
 * @return
 */
Roman Roman::operator+(const int) const
{
    return Roman();
}
/*!
 *
 * @return
 */
Roman operator+(const int, const Roman &)
{
    return Roman();
}
/*!
 *
 */
void Roman::operator+=(const Roman &)
{

}
/*!
 *
 */
void Roman::operator+=(const int)
{

}
/*!
 *
 * @return
 */
Roman Roman::operator++()
{
    return Roman();
}
/*!
 *
 * @return
 */
ostream &operator<<(ostream &, const Roman &)
{
    return <#initializer#>;
}
/*!
 *
 * @return
 */
istream &operator>>(istream &, Roman &)
{
    return <#initializer#>;
}


