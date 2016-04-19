/* TestCase 1: Variable Declarations */

int globalint;

void ElFuegoQueArde()
{
  int x = 0;
  return;
}

void main()
{
  int localint, a;
  int g, b;
  int i;
  int localint2 = 20 - 5; /* error 1, redeclear localint */
  int vector[5];
  int buceta2[9];
  int vector32[8];
  globalint = 100;
  localint = globalint * 20 - 5;
  vector[2] = 200;
  write("hola mundo malo");
  write("adios mundo malo");
  a = read();
  b = read();
  return;
}
