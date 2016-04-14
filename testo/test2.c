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

void essaBuceta()
{
  int localint, a;
  int g;
  int localint2 = 20 - 5; /* error 1, redeclear localint */
  int xis = 23;
  int pexe = 910;
  int fudeu = 90;
  int jaja = 321;
  int kkk = 666;
	int xi2s = 23;
	int pexe2 = 910;
	int fudeu2 = 90;
	int jaj3a = 321;
	int kk3k = 666;
	int s3k = 32;
	int jeje = 3232;
	float aheu = 32;
  localint = 100;
  localint = localint * 20 - 5;

  a = 10;
  a = a + 3;  /* error 2, undeclear b */

  g = localint / 5;

  return;
}

int main()
{

  float a, b, c, result0;
  int result;
  adde();
  a = 1.2;
  b = 1.3;
  c = 1.5;



  a = add(a,b);  /* error 3: incompatible return type */
	return 0;
}
