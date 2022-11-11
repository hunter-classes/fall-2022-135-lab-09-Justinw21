#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{

  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  //Task A
  std::cout << length(&pointP) << std::endl;
  std::cout << length(&pointQ) << std::endl;

  //Task B
  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl;

  Coord3D *ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "ans = " << ans << std::endl;

  //Task C
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, -12.0);

  Coord3D first = {1, 2, 3};
  Coord3D second = {2, 3, 4};

  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

  //Task D
  double x = 10;
  double y = 20;
  double z = 30;
  Coord3D *ppos = createCoord3D(x,y,z);
  double xVel = 5.5;
  double yVel = -1.4;
  double zVel = 7.77;
  Coord3D *pvel = createCoord3D(xVel, yVel, zVel);
  move(ppos, pvel, 10.0);
  std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos);
  deleteCoord3D(pvel);

  return 0;
}
