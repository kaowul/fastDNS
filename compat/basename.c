/* Return the basename of a pathname.
   This file is in the public domain. */

char *
basename (const char *name);
char *
basename (const char *name)
{
  const char *base;

  for (base = name; *name; name++)
    {
      if (*name == '/')
       {
         base = name + 1;
       }
    }
  return (char *) base;
}
