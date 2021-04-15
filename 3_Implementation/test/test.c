#include "unity.h"
#include "header.h"

/**
 * @brief Creating the structures required for testing
 * 
 */
static filter_param f1;
static opamp_param o1;
static timer_param t1;

void setUp()
{
    //required by unity
}

void tearDown()
{
    //required by unity
}

/**
 * @brief Test cases first check successful return of enum 'SUCCESS'.
 * and in the second test case check the calculated value stored in the freq member of structure.
 * A dummy test case with wrong input is also provided.
 */
void fil_test()
{
    f1.r=100;f1.c=220;
    TEST_ASSERT_EQUAL(filter_calc(&f1,1),SUCCESS);
    TEST_ASSERT_EQUAL(7.238,f1.freq);

    f1.l=100;f1.c=220;
    TEST_ASSERT_EQUAL(filter_calc(&f1,2),SUCCESS);
    TEST_ASSERT_EQUAL(33.949,f1.freq);

    f1.r=100;f1.l=200;
    TEST_ASSERT_EQUAL(filter_calc(&f1,3),SUCCESS);
    TEST_ASSERT_EQUAL(79.618,f1.freq);

    TEST_ASSERT_EQUAL(filter_calc(&f1,4),ERROR);
}

/**
 * @brief Test cases first check successful return of enum 'SUCCESS'.
 * and in the second test case check the calculated value stored in the gain member of structure.
 * A dummy test case with wrong input is also provided.
 */
void op_test()
{
    o1.r1=1000;o1.r2=5000;
    TEST_ASSERT_EQUAL(opamp_calc(&o1,1),SUCCESS);
    TEST_ASSERT_EQUAL(6.00,o1.gain);    

    o1.r1=1200;o1.r2=2800;
    TEST_ASSERT_EQUAL(opamp_calc(&o1,2),SUCCESS);
    TEST_ASSERT_EQUAL(2.33,o1.gain);

    TEST_ASSERT_EQUAL(opamp_calc(&o1,3),ERROR);
}

/**
 * @brief Test cases first check successful return of enum 'SUCCESS'.
 * and in the second test case check the calculated value stored in the freq member of structure.
 * A dummy test case with wrong input is also provided.
 */
void timer_test()
{
    t1.r1=1000;t1.c=220;
    TEST_ASSERT_EQUAL(timer_calc(&t1,1),SUCCESS);
    TEST_ASSERT_EQUAL(0.242,t1.freq);

    t1.r1=500;t1.r2=1000;t1.c=220;
    TEST_ASSERT_EQUAL(timer_calc(&t1,2),SUCCESS);
    TEST_ASSERT_EQUAL(4.373,t1.freq);
}

/**
 * @brief Simple test cases to check calculated values
 * 
 */
void batt_test()
{
    TEST_ASSERT_EQUAL(battery_calc(10000,3.3),3030.30);
    TEST_ASSERT_EQUAL(battery_calc(5000,15),333.33);
}

/**
 * @brief Simple test cases to check calculated values
 * 
 */
void reac_test()
{
    /* The values returned are high since they do not take microfarads or millihenry into consideration,
    that is done in the main.c file*/
    TEST_ASSERT_EQUAL(reactance(50,220),69080);
    TEST_ASSERT_EQUAL(reactance(200,1000),1256000);
}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(fil_test);
    RUN_TEST(op_test);
    RUN_TEST(timer_test);
    RUN_TEST(batt_test);
    RUN_TEST(reac_test);
    return UNITY_END();
}
