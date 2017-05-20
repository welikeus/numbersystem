#include <ctest.h>
#include <fsys.h>
#include <math.h>

CTEST(todecimal_suite, correct_data_2)
{
    int innum = 2;
    char *insystem = "10101";
    int result = todecimal(insystem, innum);
    int expected = 21;
    ASSERT_EQUAL(expected, result);
}
/*
CTEST(todecimal_suite, correct_data_3)
{
    const int innum = 3;
    char insystem = "12121";
    const int result = todecimal(insystem, innum);
    const int expected = 151;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_4)
{
    const int innum = 4;
    char insystem = "12323";
    const int result = todecimal(insystem, innum);
    const int expected = 443;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_5)
{
    const int innum = 5;
    char insystem = "12344";
    const int result = todecimal(insystem, innum);
    const int expected = 974;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_6)
{
    const int innum = 6;
    char insystem = "12354";
    const int result = todecimal(insystem, innum);
    const int expected = 1870;
    ASSERT_EQUAL(expected, result);
}


CTEST(todecimal_suite, correct_data_7)
{
    const int innum = 7;
    char insystem = "12654";
    const int result = todecimal(insystem, innum);
    const int expected = 3420;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_8)
{
    const int innum = 8;
    char insystem = "12657";
    const int result = todecimal(insystem, innum);
    const int expected = 5551;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_9)
{
    const int innum = 9;
    char insystem = "22658";
    const int result = todecimal(insystem, innum);
    const int expected = 15119;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_11)
{
    const int innum = 11;
    char insystem = "2265A";
    const int result = todecimal(insystem, innum);
    const int expected = 32735;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_12)
{
    const int innum = 12;
    char insystem = "226BA";
    const int result = todecimal(insystem, innum);
    const int expected = 45934;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_13)
{
    const int innum = 13;
    char insystem = "226BC";
    const int result = todecimal(insystem, innum);
    const int expected = 62685;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_14)
{
    const int innum = 14;
    char insystem = "226DC";
    const int result = todecimal(insystem, innum);
    const int expected = 83690;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_15)
{
    const int innum = 15;
    char insystem = "226EC";
    const int result = todecimal(insystem, innum);
    const int expected = 109572;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_16)
{
    const int innum = 16;
    char insystem = "226FC";
    const int result = todecimal(insystem, innum);
    const int expected = 141052;
    ASSERT_EQUAL(expected, result);

}

*/
