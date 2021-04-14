#include "../inc/Equivalent.h"
#include "../inc/Star_Delta_Conversion.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

int x[3]={9,9,9};
int y[4]={16,16,16,16};
int z[5]={25,25,25,25,25};
        
void test_Net_Series_Resistance(void){
    TEST_ASSERT_EQUAL_INT(27,Net_Series_Resistance(x,3));
    TEST_ASSERT_EQUAL_INT(64,Net_Series_Resistance(y,4));
    TEST_ASSERT_EQUAL_INT(125,Net_Series_Resistance(z,5));
}
void test_Net_Parallel_Resistance(void){
    TEST_ASSERT_EQUAL_FLOAT(3.00,Net_Parallel_Resistance(x,3));
    TEST_ASSERT_EQUAL_FLOAT(4.00,Net_Parallel_Resistance(y,4));
    TEST_ASSERT_EQUAL_FLOAT(5.00,Net_Parallel_Resistance(z,5));
}

void test_Net_Series_Inductance(void){
    TEST_ASSERT_EQUAL_INT(27,Net_Series_Inductance(x,3));
    TEST_ASSERT_EQUAL_INT(64,Net_Series_Inductance(y,4));
    TEST_ASSERT_EQUAL_INT(125,Net_Series_Inductance(z,5));
}

void test_Net_Parallel_Inductance(void){
    TEST_ASSERT_EQUAL_FLOAT(3.00,Net_Parallel_Inductance(x,3));
    TEST_ASSERT_EQUAL_FLOAT(4.00,Net_Parallel_Inductance(y,4));
    TEST_ASSERT_EQUAL_FLOAT(5.00,Net_Parallel_Inductance(z,5));
}

void test_Net_Series_Capacitance(void){
    TEST_ASSERT_EQUAL_FLOAT(3.00,Net_Series_Capacitance(x,3));
    TEST_ASSERT_EQUAL_FLOAT(4.00,Net_Series_Capacitance(y,4));
    TEST_ASSERT_EQUAL_FLOAT(5.00,Net_Series_Capacitance(z,5));
}

void test_Net_Parallel_Capacitance(void){
    TEST_ASSERT_EQUAL_INT(27,Net_Parallel_Capacitance(x,3));
    TEST_ASSERT_EQUAL_INT(64,Net_Parallel_Capacitance(y,4));
    TEST_ASSERT_EQUAL_INT(125,Net_Parallel_Capacitance(z,5));
}

void test_Star_to_Delta_conversion(void){
    TEST_ASSERT_EQUAL_FLOAT(81.00,Star_to_Delta_conversion(x));
    TEST_ASSERT_EQUAL_FLOAT(144.00,Star_to_Delta_conversion(y));
    TEST_ASSERT_EQUAL_FLOAT(225.00,Star_to_Delta_conversion(z));
}

void test_Delta_to_Star_conversion(void){
    TEST_ASSERT_EQUAL_FLOAT(9.00,Delta_to_Star_conversion(x));
    TEST_ASSERT_EQUAL_FLOAT(16.00,Delta_to_Star_conversion(y));
    TEST_ASSERT_EQUAL_FLOAT(25.00,Delta_to_Star_conversion(z));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Net_Series_Resistance);   
RUN_TEST(test_Net_Parallel_Resistance);   
RUN_TEST(test_Net_Series_Inductance);   
RUN_TEST(test_Net_Parallel_Inductance);   
RUN_TEST(test_Net_Series_Capacitance);   
RUN_TEST(test_Net_Parallel_Capacitance);
RUN_TEST(test_Star_to_Delta_conversion);     
RUN_TEST(test_Delta_to_Star_conversion); 
return UNITY_END();
}
