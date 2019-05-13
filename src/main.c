#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>
#define _POSIX_C_SOURCE

/** Declare global Regular Expression struct.*/
regex_t m_expr;

char* pattern = "M[a-zA-Z]*l";
char* testinput = "Michael";

char* input = NULL;

void test()
{
  int ret = 0;
  regex_t *r = NULL;

  r = &m_expr;
  ret = regcomp(r, pattern, 0);

  switch (ret)
    {
    case REG_BADBR: 
      break;
    case REG_BADPAT:
      break;
    case REG_BADRPT:
      break;
    case REG_ECOLLATE:
      break;
    case REG_ECTYPE:
      break;
    case REG_EESCAPE:
      break;
    case REG_ESUBREG:
      break;
    case REG_EBRACK:
      break;
    case REG_EPAREN:
      break;
    case REG_EBRACE:
      break;
    case REG_ERANGE:
      break;
    case REG_ESPACE:
      break;
    default:
      fprintf(stdout, "Successfully compiled regexp\n");
      break;
    }

  ret = regexec(r, input, 0, NULL, REG_NOTBOL | REG_NOTEOL);

  if (ret==0)
  {
    fprintf(stdout, "Matched.\n");
  }else{
    fprintf(stdout, "No match.\n");
  }

  regfree(r);
}

int main(int argc,
	 char* argv[])
{
  int ret = 0;

  if (2==argc)
  {
    input = argv[1];
    test();
  }else{
    fprintf(stderr, "\n\tmatchx [test input string]\n");
  }


  return ret;
}
