#include "operation.h"


Coordinates point_cut; // для scalpel
Coordinates point_suture;  // для suture
Points tools; // для hemostat и tweezers

int main() {

    scalpel(point_cut);
    hemostat(tools, point_cut);
    tweezers(tools, point_cut);
    suture(point_suture, point_cut);

    return 0;
}

