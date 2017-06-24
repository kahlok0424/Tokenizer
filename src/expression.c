#include <stdio.h>
#include "expression.h"
#include "tokenizer.h"
#include "CException.h"
#include "Exception.h"

int computeExpression(char *str){
    
    printf("expression : %s\n",str);
    TokenizerString *tokstr  = tokenizerStringCreate(str);
    Token *token = tokenize(tokstr);
    TokenInt *tokenInt;
    
    if(token -> id == INTEGER){
        tokenInt = (TokenInt *)token;
        printf("The value of the interger token is %d\n",tokenInt->value);
    }else{
        Throw(createException("First token is not a number",1));
    }
    
    return 0;
    
}