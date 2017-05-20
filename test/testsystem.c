#include <ctest.h>
#include <fsys.h>

CTEST(todecimal_suite, correct_data_2)
{
    int innum = 2;
    char *insystem = "10101";
    int result = todecimal(insystem, innum);
    int expected = 21;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_3)
{
    int innum = 3;
    char *insystem = "12121";
    int result = todecimal(insystem, innum);
    int expected = 151;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_4)
{
    int innum = 4;
    char *insystem = "12323";
    int result = todecimal(insystem, innum);
    int expected = 443;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_5)
{
    int innum = 5;
    char *insystem = "12344";
    int result = todecimal(insystem, innum);
    int expected = 974;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_6)
{
    int innum = 6;
    char *insystem = "12354";
    int result = todecimal(insystem, innum);
    int expected = 1870;
    ASSERT_EQUAL(expected, result);
}


CTEST(todecimal_suite, correct_data_7)
{
    int innum = 7;
    char *insystem = "12654";
    int result = todecimal(insystem, innum);
    int expected = 3420;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_8)
{
    int innum = 8;
    char *insystem = "12657";
    int result = todecimal(insystem, innum);
    int expected = 5551;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_9)
{
    int innum = 9;
    char *insystem = "22658";
    int result = todecimal(insystem, innum);
    int expected = 15119;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_11)
{
    int innum = 11;
    char *insystem = "2265A";
    int result = todecimal(insystem, innum);
    int expected = 32735;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_12)
{
    int innum = 12;
    char *insystem = "226BA";
    int result = todecimal(insystem, innum);
    int expected = 45934;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_13)
{
    int innum = 13;
    char *insystem = "226BC";
    int result = todecimal(insystem, innum);
    int expected = 62685;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_14)
{
    int innum = 14;
    char *insystem = "226DC";
    int result = todecimal(insystem, innum);
    int expected = 83690;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_15)
{
    int innum = 15;
    char *insystem = "226EC";
    int result = todecimal(insystem, innum);
    int expected = 109572;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, correct_data_16)
{
    int innum = 16;
    char *insystem = "226FC";
    int result = todecimal(insystem, innum);
    int expected = 141052;
    ASSERT_EQUAL(expected, result);

}

