#include <iostream>
#include "shape_3d.h"

using namespace std;

int main(){
  Shape_3d *obj;

  obj = new Cube();
  obj -> get_area();
  obj -> get_volume();
  delete obj;
  cout << endl;

  obj = new Parallel();
  obj -> get_area();
  obj -> get_volume();
  delete obj;
  cout << endl;

  obj = new Tetra_correct();
  obj -> get_area();
  obj -> get_volume();
  delete obj;
  cout << endl;
  
  return 0;
}
