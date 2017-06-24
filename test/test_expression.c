#include "unity.h"
#include "mock_tokenizer.h"
#include "expression.h"
#include "mock_tokenizerstring.h"
#include "CException.h"
#include "Exception.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_computeexpression_given_2_plus_3(void)
{   
    int result;
    char *str = "256 + 38";
    TokenizerString tokstr = {str,0};
    
    TokenInt firstval = {INTEGER ,256};
    
    tokenizerStringCreate_ExpectAndReturn(str , &tokstr);
    tokenize_ExpectAndReturn(&tokstr ,(Token *)&firstval);
    
   result = computeExpression(str);
   
   TEST_ASSERT_EQUAL(294,result);
}
