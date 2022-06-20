#include <stdio.h>

void pre(void) 
{
  char inputs[10][3];
  char winner[10][3];
  int *tempInt = 0;
  int i = 0;
  int size[10];
  char end;

  printf( "Please input state and pop: \n" );

  while( scanf( "%s%d", inputs[i], &tempInt ) != EOF )
  {
    size[i] = tempInt;
    i++;
    printf( "Please input state and pop: \n");
  }

  i = 0;
  for ( int j = 0; j < 10; j++ )
  {
    if ( size[j] > 40 || size[j] < 0 )
    {
      break;
    }

    if ( size[j] > 10 )
    {
      for ( int k = 0; k < 3; k++ )
      {
        winner[i][k] = inputs[j][k];
      }
      i++;
    }
  }

  printf( "States with populations larger than 10 mil: \n");
  for ( int k = 0; k < i; k++ )
  {
    printf( "%s", winner[k] );
    printf( "\n" );
  }
  
  return 0;
}