/* TestCase 2: Functions and function calls */

float add (float a, float b)
{
  float result = a + b;
  return result;
}

int main()
{
  float a, b, c, result0;
  int result;
  
  a = 1.2;
  b = 1.3;
  c = 1.5;

  result0 = add(a);  /* error 1: too few arguments */

  result0 = add(a,b,c); /* error 2: too many arguments */

  result = add(a,b);  /* error 3: incompatible return type */

}
