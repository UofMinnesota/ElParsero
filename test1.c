/* TestCase 1: Variable Declarations */

int globalint;

void main()
{
  int localint, a;
  int g, b;
  int localint2 = 20 - 5; /* error 1, redeclear localint */
  int vector[5];
  int buceta2[9];
    int vector32[8];
  globalint = 100;
  localint = globalint * 20 - 5;
  vector[2] = 200;

  while(localint2 == 3){
    a = a + 1;
    if(globalint == 4){
      b = 1;
    }else{
      b = 3;
    }
  }


  if(globalint){
    b = 4;
    if(localint == 3){
      b = 8;
    }else{
      b = 3;
    }
  }else{
    b = 1;
    if(globalint > 3){
      g = 4;
    }else{
      g = 55;
    }
  }
  a = a +3;  /* error 2, undeclear b */

  g = localint / 5;

  return;
}
