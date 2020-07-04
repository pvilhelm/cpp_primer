
int fact(int i)
{
  int f = 1;
  while (i > 0)
    f *= i--;

  return f;
}
