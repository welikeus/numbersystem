#include <ctest.h>
#include <fsys.h>

CTEST(todecimal_suite, correct_data_2)
{
    const int innum = 2;
    const int insystem = "10101"
    const int result = todecimal(insystem, innum);
    const int expected = 21;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_3)
{
    const int innum = 3;
    const int insystem = "12121"
    const int result = todecimal(insystem, innum);
    const int expected = 151;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_4)
{
    const int innum = 4;
    const int insystem = "12323"
    const int result = todecimal(insystem, innum);
    const int expected = 443;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_5)
{
    const int innum = 5;
    const int insystem = "12344"
    const int result = todecimal(insystem, innum);
    const int expected = 974;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_6)
{
    const int innum = 6;
    const int insystem = "12354"
    const int result = todecimal(insystem, innum);
    const int expected = 1870;
    ASSERT_EQUAL(expected, result);
}


CTEST(todecimal_suite, correct_data_7)
{
    const int innum = 7;
    const int insystem = "12654"
    const int result = todecimal(insystem, innum);
    const int expected = 3420;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_8)
{
    const int innum = 8;
    const int insystem = "12657"
    const int result = todecimal(insystem, innum);
    const int expected = 5551;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_9)
{
    const int innum = 9;
    const int insystem = "22658"
    const int result = todecimal(insystem, innum);
    const int expected = 15119;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_11)
{
    const int innum = 11;
    const int insystem = "2265A"
    const int result = todecimal(insystem, innum);
    const int expected = 32735;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_12)
{
    const int innum = 12;
    const int insystem = "226BA"
    const int result = todecimal(insystem, innum);
    const int expected = 45934;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_13)
{
    const int innum = 13;
    const int insystem = "226BC"
    const int result = todecimal(insystem, innum);
    const int expected = 62685;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_14)
{
    const int innum = 14;
    const int insystem = "226DC"
    const int result = todecimal(insystem, innum);
    const int expected = 83690;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_15)
{
    const int innum = 15;
    const int insystem = "226EC"
    const int result = todecimal(insystem, innum);
    const int expected = 109572;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_16)
{
    const int innum = 16;
    const int insystem = "226FC"
    const int result = todecimal(insystem, innum);
    const int expected = 141052;
    ASSERT_EQUAL(expected, result);

}

