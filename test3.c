/* TestCase 3: Array references */

int add (int a[][2])
{
  int result = a[0][0] + a[1][1];
  return result;
}

int equal(int a)
{
  return a;
}

int main()
{
  int a[2][2];
  int b[2][2];
  int i, j, result;
  float index = 0.5;

  a[0] = 1;  /* error 1: incompatible array dimensions */
  a[0][index] = 0;  /* error 2: array index should be integer */

  for(i = 0; i<2; i = i + 1){
    for(j = 0; j<2; j = j + 1){
      b[i][j] = i + j;
    }
  }

  result = add(b[0][0]); /* error 3: scalar pass to array */

  result = equal(b); /* error 4: array pass to scalar */

  result = add(b);

}
