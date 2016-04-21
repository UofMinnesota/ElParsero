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
  int b, g;
  int i, j;
  int localint2 = 20 - 5; /* error 1,
  redeclear localint */
  int vector[5];
  int vector2[3][2][2];
  int vector32[8];

  globalint = 100;
  vector[2] = 200;
  vector2[1] = 3;
  localint = globalint * 20 - 5;

  globalint = vector[2];

  vector[1] = globalint;
  g = ElFuegoQueArde(globalint, vector[2], localint, g);

  return;
}
