#include <ctest.h>
#include <fsys.h>

CTEST(fromdecimal_suite, incorrect_outsystem_1)
{
    const int in = 14;
    char out[100];
    const int outsystem = 1;
    const int result = fromdecimal(in, out, outsystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(fromdecimal_suite, incorrect_outsystem_17)
{
    const int in = 27;
    char out[100];
    const int outsystem = 17;
    const int result = fromdecimal(in, out, outsystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, incorrect_insystem_1)
{
    char in[] = "00";
    const int insystem = 1;
    const int result = todecimal(in, insystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(todecimal_suite, incorrect_insystem_17)
{
    char in[] = "43";
    const int insystem = 17;
    const int result = todecimal(in, insystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(bonds_suite, incorrect_insystem_1)
{
    char in[] = "00";
    char out[100];
    const int insystem = 1;
    const int outsystem = 10;
    const int result = bonds(in, out, insystem, outsystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(bonds_suite, incorrect_insystem_17)
{
    char in[] = "FG";
    char out[100];
    const int insystem = 17;
    const int outsystem = 10;
    const int result = bonds(in, out, insystem, outsystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(bonds_suite, incorrect_outsystem_1)
{
    char in[] = "1010";
    char out[100];
    const int insystem = 2;
    const int outsystem = 1;
    const int result = bonds(in, out, insystem, outsystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(bonds_suite, incorrect_outsystem_17)
{
    char in[] = "1010";
    char out[100];
    const int insystem = 2;
    const int outsystem = 17;
    const int result = bonds(in, out, insystem, outsystem);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}