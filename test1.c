/* TestCase 1: Variable Declarations */

int globalint;

int ElFuegoQueArde(int j, int i, int r, int vec)
{

  int b,x = j;
  b = 4 + r;
  b = 9 + j;
  b = i;
  return b;
}


void main()
{
  int localint, a;
  int b, g = 0;
  int i, j;
  int localint2 = 20 - 5; /* error 1,
  redeclear localint */
  int vector[5];
  int buceta2[9];
  int vector32[8];

  globalint = 100;
  vector[2] = 200;
  localint = globalint * 20 - 5;

  globalint = vector[2];

  vector[1] = globalint;
  g = ElFuegoQueArde(globalint,g, localint, g);

  return;
}
