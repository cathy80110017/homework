/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* word.c (Chapter 15, page 363) */

#include <stdio.h>
#include <string.h>
#include "word.h"

#define MAX_WORD_LEN 20     //這裡做更改囉

int read_char(void){
  int ch = getchar();

  if (ch == '\n' || ch == '\t')
    return ' ';
  return ch;
}

void read_word(char *word, int len){
  int ch, pos = 0;

  while ((ch = read_char()) == ' ') ;
  while (ch != ' ' && ch != EOF) {
    if (pos < len)
      word[pos++] = ch;
    ch = read_char();
  }
  word[pos] = '\0';

  if (strlen(word) > MAX_WORD_LEN)    //複製到這裡囉
  word[MAX_WORD_LEN] = '*';

}
