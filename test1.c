/* TestCase 1: Variable Declarations */

int globalint;

void main()
{
  int localint, a = 0;
  int g, b;
  int i;
  int localint2 = 20 - 5; /* error 1, redeclear localint */
  int vector[5];
  int buceta2[9];
    int vector32[8];
  globalint = 100;
  localint = globalint * 20 - 5;
  vector[2] = 200;

  for (i = 0; i < globalint; i= i+1){
    a = a+20;
  }

  a = a +3;  /* error 2, undeclear b */

  g = localint / 5;

  return;
}
