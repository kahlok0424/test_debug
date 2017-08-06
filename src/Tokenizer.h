#ifndef Tokenizer_H
#define Tokenizer_H

#include "Common.h"
#include "Token.h"

INLINE Token *advanceToken(Tokenizer *tokenizer);
INLINE Token *getToken(Tokenizer *tokenizer);
INLINE Token *peepToken(Tokenizer *tokenizer);
Tokenizer *initTokenizer(char *stringToTokenize);

#endif // Tokenizer_H
