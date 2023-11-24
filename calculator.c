#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float v_One;
  float v_Two;
  char operator;
  float result;

  printf("Enter calculation:\n");
  scanf("%f %c %f", &v_One, &operator, & v_Two);

  switch(operator)
    {
    case '/': result = v_One/v_Two;
      break;
    case '*': result = v_One*v_Two;
      break;
    case '+': result = v_One+v_Two;
      break;
    case '-': result = v_One-v_Two;
      break;
    case '^': result = pow(v_One,v_Two);
      break;
    case ' ': result = sqrt(v_Two);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n",v_One,operator, v_Two, result);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
