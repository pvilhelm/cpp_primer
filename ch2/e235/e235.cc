


int main()
{
  const int i = 42;
  auto j = i; /* int */
  j = 42;

  const auto &k = i; /* const ref to const int */
  auto *p = &i; /* ptr to cint */
  const auto j2 = i, &k2 = i; /*cint, const ref to cint */
}
