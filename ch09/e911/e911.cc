#include <vector>

int main()
{
  using vi = std::vector<int>;
  //  typedef std::vector<int> vi;
  vi v1; /* Default ctor */
  vi v2(v1); /* Cpy ctor */
  vi v3(v1.begin(), v1.end()); /* Iterator range ctor */
  vi v4(10,2);
  vi v5{1,2,3,4};
  vi v6 = {1,2,3,4,5};
  vi v7 = v1;

  
  return 0;
}
