#include "unity.h"
#include <fun.h>

/* Modify these two lines according to the project */
#define PROJECT_NAME    "BANKING SYSTEM"

/* Prototypes for all the test functions */
void test_sorting(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sorting);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_sorting(void); {
  TEST_ASSERT_EQUAL(1);
  
  /* Dummy fail*/
  
}
