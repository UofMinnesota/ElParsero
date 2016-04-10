/* TestCase 4: Structure and Union references */

struct complex1{
  float real;
  float imag;
};

struct complex2{
  float real;
  float imag;
};

/*
union number{
  int a1;
  float a2;
};
*/

struct error_complex1{
  float real;
  float real;  /* error 1: duplicate member */
};

struct error_complex2{
  float real;
  struct error_complex2 next;  /* error 2: struct cannot contain itself */
};

int main()
{
  struct complex1 x,y;
  struct complex2 z;

  x.real = 1.0;
  x.imag = 2.0;

  y.real = 0.0;
  y.imag = 1.5;
  y.reall = 1.1;  /* error 3: no member reall */

  z.real = 0.5;
  z.imag = 0.8;

  y = x;
  y = x * 2; /* error 4: invalid operation "*" */

  x = z; /* error 5: incompatible type */

  /* this test do not show union errors */
}
