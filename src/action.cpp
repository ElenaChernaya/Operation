#include "operation.h"
#include <iostream>


void scalpel (Coordinates &point_cut)
{
    std::cout << "Enter cut points:";
    std::cin >> point_cut.start.x >> point_cut.start.y >> point_cut.end.x >> point_cut.end.y;
    std::cout << "A cut is made at points x(" << point_cut.start.x << "," << point_cut.start.y
              << ") y(" << point_cut.end.x << "," << point_cut.end.y << ")";

}


void hemostat (Points &tools, Coordinates &point_cut)
{
    std::cout << "\nSpecify the clamping points: ";
    std::cin >> tools.x >> tools.y;

    while (true) {
        if (tools.x >= point_cut.start.x && tools.y >= point_cut.start.y
            && tools.x <= point_cut.end.x && tools.y <= point_cut.end.y)
        {
            std::cout << "\nClamp installed!";
            break;
        }
        else
        {
            std::cout << "\nPlease indicate the location of the clamping in the specified range of the cut: ";
            std::cin >> tools.x >> tools.y;
        }
    }

}


void tweezers(Points &tools, Coordinates &point_cut)
{
    std::cout << "\nInsert the clamping point with tweezers: ";
    std::cin >> tools.x >> tools.y;

    while (true) {
        if (tools.x >= point_cut.start.x && tools.y >= point_cut.start.y
            && tools.x <= point_cut.end.x && tools.y <= point_cut.end.y)
        {
            std::cout << "\nTweezers set!";
            break;
        }
        else
        {
            std::cout << "\nPlease, specify the location of the tweezers in the specified cutting range: ";
            std::cin >> tools.x >> tools.y;
        }
    }
}


void suture(Coordinates &point_suture, Coordinates &point_cut)
{
    std::cout << "\nEnter the suture points: ";
    std::cin >> point_suture.start.x >> point_suture.start.y >> point_suture.end.x >> point_suture.end.y;

    while (true) {
        if (point_suture.start.x == point_cut.start.x && point_suture.start.y == point_cut.start.y
            && point_suture.end.x == point_cut.end.x && point_cut.end.y == point_cut.end.y)
        {
            std::cout << "\nThe operation has been completed!";
            break;
        }

        else
        {
            std::cout << "\nPlease enter the suture points equal to the cut points: ";
            std::cin >> point_suture.start.x >> point_suture.start.y >> point_suture.end.x >> point_suture.end.y;
        }
    }
}

