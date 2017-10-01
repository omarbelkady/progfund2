{\rtf1\ansi\ansicpg1252\cocoartf1348\cocoasubrtf170
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural

\f0\fs24 \cf0 /******************************************************************************\
Omar Belkady\
I am designing a Population Class that stores a cuurent Population,\
annual number of deaths and annual number of Births\
*******************************************************************************/\
\
#include <iostream>\
#include <iomanip>\
\
using namespace std;\
\
class Population\
\
\{   private:\
        int currentPopulation;\
        int annualNumberOfBirths; \
        int annualNumberOfDeaths;\
    public:\
        \
        \
    Population()\
    \{   currentPopulation= 0;\
        annualNumberOfDeaths = 0;\
        annualNumberOfBirths= 0;\
            //This is my initializing constructor\
    \}\
    \
    int getDeaths()\
    \{\
        return(annualNumberOfDeaths);\
    \}\
    int getBirths()\
    \{\
        return(annualNumberOfBirths);\
    \}\
    int getPopulation()\
    \{\
        return(currentPopulation);\
    \}\
    void setDeaths(int deaths) //if there is a value less than 0 entered the default value for it is 0\
    \{\
        if ((deaths) < 0)\
        \{\
            annualNumberOfDeaths = 0;\
        \}\
        \
        else \
        \{\
            annualNumberOfDeaths = deaths;\
        \}\
    \}\
    void setBirths(int births)   //if there is a value less than 0 entered the default value for it is 0\
    \{\
        if ((births) < 0)\
        \{\
            annualNumberOfBirths = 0;\
        \}\
        \
        else \
        \{\
            annualNumberOfBirths = births;\
        \}\
    \}\
    \
    \
    void setPopulation(int population)   //if there is a value less than 2 entered the default value for it is 2\
    \{   \
        if ((population) < 2)\
        \{\
            currentPopulation = 2;\
        \}\
        else\
        \{\
            currentPopulation = population;\
        \}\
    \}\
    \
    double calcBirthRate()\
    \{\
        return((double) (annualNumberOfBirths)/ (double) (currentPopulation));\
    \}\
    \
    \
    double calcDeathRate()\
    \{\
        return((double)(annualNumberOfDeaths)/(double)(currentPopulation));\
    \}\
\};\
int main()\
\{\
    Population pop;\
    \
    int p = 0;\
    int b = 0;\
    int d = 0;\
    \
    cout<<"Enter the population  " <<endl;\
    cin>>p; // This is my population variable\
    \
    cout<< "Enter the Number of Births  " <<endl;\
    cin>> b; // This is my birth variable \
    \
    cout<< "Enter the Number of Deaths  " <<endl;\
    cin>> d; // This is my death variable\
    \
    pop.setPopulation(p);\
    pop.setBirths(b);\
    pop.setDeaths(d);\
    \
    cout<<"The current Population is "<<p<<endl;\
    cout<<"The current Birth Rate is "<<setprecision(2)<<pop.calcBirthRate()<<endl;\
    cout<<"The current Death Rate is "<<setprecision(2)<<pop.calcDeathRate()<<endl;\
    \
    \
\
    return 0;\
\}}