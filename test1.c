/* TestCase 1: Variable Declarations */

int globalint;

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
  i = 1;
  for (i = 0; i < 100; i= i+1){
    a = globalint+2;
    while(a>=100){
      localint = a + 3;

    }
  }
  while(a){
    a = a+1;
    if(a == 2){
      while(globalint > 100){
        globalint = globalint + 1;
        if(a == 2){
          while(globalint > 100){
            globalint = globalint + 1;
            if(a == 2){
              while(globalint > 100){
                globalint = globalint + 1;
              }
              a = a+1;
            }else{
              a = a+1;
            }
          }
          a = a+1;
        }else{
          a = a+1;
        }
      }
      a = a+1;
    }else{
      a = a+1;
    }
  }

  a = a +3;  /* error 2, undeclear b */

  g = localint / 5;

  return;
}
