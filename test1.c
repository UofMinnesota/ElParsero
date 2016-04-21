/* TestCase 1: Variable Declarations */

int globalint;

int ElFuegoQueArde(int j, int i, int r) 
{
  int b,x = 0;
  b = 4 + r;
  b = 9 + j;
  b = i+2;
  return b;
}


void main()
{
  int localint, a;
  int b, g = 0;
  int i, j;
  int localint2 = 20 - 5; /* error 1, redeclear localint */
  int vector[5];
  int buceta2[9];
  int vector32[8];
  globalint = 100;
  localint = globalint * 20 - 5;
  vector[2] = 200;


  if (globalint && localint < 2 && localint2 != 1){
    g = ElFuegoQueArde(localint, localint2, g);
  }

  /*write("hola mundo malo");
  write("adios mundo malo");
  a = read();
  b = read();*/

  return;
}
