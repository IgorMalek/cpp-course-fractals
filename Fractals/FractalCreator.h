#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H
#pragma once

#include <iostream>
#include <memory>
#include <cstdint>
#include <math.h>
#include <vector>
#include "Zoom.h"
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "RGB.h"
using namespace std;

namespace caveofprogramming
{
class FractalCreator
{
private:
    int m_width;
    int m_height;
    int m_total{0};

    unique_ptr<int[]> m_histogram;
    unique_ptr<int[]> m_fractal;
    Bitmap m_bitmap;
    ZoomList m_zoomList;
    vector<int> m_ranges;
    vector<RGB> m_colors;
    vector<int> m_rangeTotals;

    bool m_bGotFirstRange{false};

private:
    void calculateIteration();
    void caclulateTotalIterations();
    void drawFractal();
    void writeBitmap(string name);
    void calculateRangeTotals();

public:
    int getRange(int iterations) const;
    void addZoom(const Zoom& zoom);
    void addRange(double rangeEnd, const RGB& rgb);
    FractalCreator(int width, int height);
    ~FractalCreator();
    void run(string name);


};
}

#endif