#include <stdlib.h>
#include "tokenizerstring.h"


TokenizerString *tokenizerStringCreate(char *str){
    TokenizerString *tokstr = (TokenizerString *)malloc(sizeof(TokenizerString));
    tokstr -> data =str;
    tokstr -> index = 0;
    
    return tokstr;
}

void TokenizerStringfree(TokenizerString *tokstr){
    free(tokstr);
}