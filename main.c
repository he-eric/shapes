#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main( int argc, char** argv ) {

  screen s;
  color c;
  c.red = 255;
  clear_screen( s );
  struct matrix *edges;
  struct matrix *transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  
  int i;
  //add_box( edges, 0, 0, 0, 200, 100, 400 );
  //ident( edges );
  //matrix_mult( transform,  make_rotX( 20 ) );
  //transform = make_rotX( 20 );
  
  //generate_sphere( edges, 0, 0, 200, 100 );
  
  //draw_lines( edges, s, c );
  //display( s );
  //save_extension(s, "line.png");

  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );

  free_matrix( transform );
  free_matrix( edges );
}  