/* TestCase 1: Variable Declarations */

int globalint;

void main()
{
  int localint, a;
  int g, b;
  int localint2 = 20 - 5; /* error 1, redeclear localint */
  int vector[5];
  int vector2f[14];
    int vector32[8];
  globalint = 100;
  localint = globalint * 20 - 5;
  vector[2] = 200;

  b = 90;
  if(globalint){
    b = 4;
    if(b){
      b = 1;
    }

  }else{
    b = 1;
    if(globalint){
      a = 12;
    }
  }
  a = a +3;  /* error 2, undeclear b */

  g = localint / 5;

  return;
}
