#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
 
TEST_CASE("Coord3d")
{
    Coord3D p = {10, 20, 30};
    CHECK(p.x == 10);
    CHECK(p.y == 20);
    CHECK(p.z == 30);
}

 TEST_CASE("TASK A")
 {
    Coord3D p = {10, 20, 30};
    Coord3D q = {-20, 21, -22};
    CHECK(fabs(length(&p) - 37.416573) < 0.000001);
    CHECK(fabs(length(&q) - 36.40054944 ) < 0.000001);
 }

 TEST_CASE("TASK B")
 {
    Coord3D p = {10, 20, 30};
    Coord3D q = {-20, 21, -22};

    Coord3D first = {12, 24, 36};
    Coord3D second = {30, 40, 50};

    CHECK(fartherFromOrigin(&p, &q) == &p);
    CHECK(fartherFromOrigin(&first, &second) == &second);
 }

 TEST_CASE("TASK C")
 {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    Coord3D first = {1, 2, 3};
    Coord3D second = {2, 3, 4};

    move(&pos, &vel, 2.0);

    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);

    move(&first, &second, -12.0);
    
    CHECK(first.x == -23);
    CHECK(first.y == -34);
    CHECK(first.z == -45);
 }

 TEST_CASE("TASK E")
 {
    Coord3D* first = createCoord3D(1,2,3);
    Coord3D* second = createCoord3D(10,20,30);
    Coord3D* third = createCoord3D(12, 32, -20);

    CHECK((*first).x == 1);
    CHECK((*first).y == 2);
    CHECK((*first).z == 3);

    CHECK((*second).x == 10);
    CHECK((*second).y == 20);
    CHECK((*second).z == 30);

    CHECK((*third).x == 12);
    CHECK((*third).y == 32);
    CHECK((*third).z == -20);

    deleteCoord3D(first);
    deleteCoord3D(second);
    deleteCoord3D(third);
    
 }
