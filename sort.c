#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort()
{
  char alpha[10][3];
  char store[3];
  int i = 0;
  
  printf( "Please input state initials: \n" );
  while( scanf( "%s", alpha[i] ) != EOF )
  {
    printf( "Please input state initials: \n" );
    i++;
  }

  for ( int j = 0; j < 10; j++ )
  {
    for ( int k = 0; k < (10-1-j); k++ )
    {
      if ( strcmp( alpha[k], alpha[k+1] ) > 0 )
      {
        strcpy( store, alpha[k] );
        strcpy( alpha[k], alpha[k+1] );
        strcpy( alpha[k+1], store );
      }
    }
  }

  for ( int l = 0; l < 10; l++ )
  {
    printf( "%s", alpha[l] );
    printf( "\n");
  }
  
}