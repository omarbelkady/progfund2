// Class definetion for DivSales
//
// Created by Omar Belkady


#include <iostream>
#include "DivSales.h"

int DivSales::totalCorporateSales;

void DivSales::setQuarterlySalesData (int quarterOne, int quarterTwo, int quarterThree, int quarterFour)
{
    quarterSalesFigures[0] = quarterOne;
    quarterSalesFigures[1] = quarterTwo;
    quarterSalesFigures[2] = quarterThree;
    quarterSalesFigures[3] = quarterFour;

    DivSales::totalCorporateSales = quarterOne + quarterTwo + quarterThree + quarterFour;
}

int DivSales::getQuarterSalesFigure (int position)
{
    return quarterSalesFigures[position];
}
