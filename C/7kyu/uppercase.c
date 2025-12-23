char *to_jaden_case(char *jaden_case, const char *string)
{
  // write to jaden_case and return it

  int i = 0;
  while(string[i] != '\0')
    {
      jaden_case[i] = string[i];

      if((i == 0 || jaden_case[i - 1] == ' ') && jaden_case[i] >= 'a' &&
         jaden_case[i] <= 'z')
        jaden_case[i] -= 32;
      i++;
    }
  jaden_case[i] = '\0';

  return jaden_case;
}
