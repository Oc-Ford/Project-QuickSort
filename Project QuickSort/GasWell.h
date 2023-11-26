#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include "WellData.h"
using namespace std;

class GasWell
{
public:
    GasWell();
    GasWell(const string& name);

    void addWellData(const WellData& data);
    const vector<WellData>& getWellData() const;

    int partition(vector<GasWell>& wells, int low, int high);
    friend bool compareByFlowToTemp(const GasWell& a, const GasWell& b);
    void quicksortFlowToTemp(vector<GasWell>& wells, int low, int high);
    void printSortedWells(const vector<GasWell>& wells);

    string wellName;
    vector<WellData> WellInfo;

};