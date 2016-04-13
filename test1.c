/* TestCase 1: Variable Declarations */

int globalint;
int globalinto;

void main()
{
  int localint, a;
  int g;
  int localint2 = 20 - 5; /* error 1, redeclear localint */

  globalint = 100;
  localint = globalinto * 20 - 5;

  a = 10;
  a = a + 3;  /* error 2, undeclear b */

  g = localint / 5;

  return;
}
