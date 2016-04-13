/* TestCase 2: Functions and function calls */
int adde ()
{
	int a, b, c;
  float result = a + b + c;
  return result;
}

float wqwwqwq (float a, float b,float a1, float b2,float a3, float b4,float a5, float b6,float a7, float b8)
{
  float result = a + b;
  return result;
}
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



  a = add(a,b);  /* error 3: incompatible return type */
	return 0;
}
