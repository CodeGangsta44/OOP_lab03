#include <iostream>
#include <cmath>

using namespace std;

class Shape_3d{
  protected:
    float* sides;
  public:
    Shape_3d(int count){sides = new float[count];};
    virtual float get_area() = 0;
    virtual float get_volume() = 0;
    virtual ~Shape_3d(){delete [] sides;};
};

class Cube : public Shape_3d{
  public:

    Cube():Shape_3d(1){
      cout << "Enter the length of the cube side: ";
      cin >> sides[0];
    }
    Cube(float side):Shape_3d(1){ sides[0] = side; };

    float get_area(){
      float area = 6*(sides[0] * sides[0]);
      cout << "Area of this cube: " << area << endl;
      return area;
    }
    float get_volume(){
      float volume = sides[0] * sides[0] * sides[0];
      cout << "Volume of this cube: " << volume << endl;
      return volume;
    }
};

class Parallel : public Shape_3d{
  public:

    Parallel():Shape_3d(3){
      cout << "Enter the lengths of the parallelepiped sides(space between): ";
      cin >> sides[0] >> sides[1] >> sides[2];
    }
    Parallel(float side_1, float side_2, float side_3):Shape_3d(3){
      sides[0] = side_1; sides[1] = side_2; sides[2] = side_3;
    }

    float get_area(){
      float area = 2*(sides[0]*sides[1] + sides[0]*sides[2] + sides[1]*sides[2]);
      cout << "Area of this parallelepiped: " << area << endl;
      return area;
    }
    float get_volume(){
      float volume = sides[0]*sides[1]*sides[2];
      cout << "Volume of this parallelepiped: " << volume << endl;
      return volume;
    }
};

class Tetra_correct : public Shape_3d{
  public:

    Tetra_correct():Shape_3d(1){
      cout << "Enter the length of the tetrahedron side: ";
      cin >> sides[0];
    }
    Tetra_correct(float side):Shape_3d(1) {sides[0] = side;};

    float get_area(){
      float area = sqrt(3)*sides[0]*sides[0];
      cout << "Area of this tetrahedron: " << area << endl;
      return area;
    }
    float get_volume(){
      float volume = (sides[0]*sides[0]*sides[0]*sqrt(2))/12;
      cout << "Volume of this tetrahedron: " << volume << endl;
      return volume;
    }
};
