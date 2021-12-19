#ifndef REGEX_H
#define REGEX_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int regex_match(char const *str, char const *pattern);
int _regex_match(char const *str, char const *pattern, int **memo,
	char const *s, char const *p);

#endif
