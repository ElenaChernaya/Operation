#pragma once

struct Points
{
    double x;
    double y;
};

struct Coordinates {
    Points start;
    Points end;
};



void scalpel (Coordinates &point_cut);
void hemostat (Points &point, Coordinates &point_cut);
void tweezers(Points &point, Coordinates &point_cut);
void suture(Coordinates &point_suture, Coordinates &point_cut);
