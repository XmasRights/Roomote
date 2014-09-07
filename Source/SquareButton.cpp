/*
  ==============================================================================

    SquareButton.cpp
    Created: 7 Sep 2014 4:11:52pm
    Author:  ChrisHome

  ==============================================================================
*/

#include "SquareButton.h"

SquareButton::SquareButton(const String &name) : Button(name)
{
    
}

SquareButton::~SquareButton()
{
    
}

void SquareButton::paintButton(Graphics& g, bool isMouseOverButton,bool isButtonDown)
{
    if (isMouseOverButton)
    {
        g.fillAll(Colours::green);
    }
    else
    {
        g.fillAll(Colours::lightcyan);
    }
    
    int margin = getWidth() * 0.125;
    int xTitle = margin;
    int yTitle = margin;
    int wTitle = getWidth() - 2 * margin;
    int hTitle = getHeight() * 0.2;
    
    g.setColour(Colours::black);
    g.drawFittedText(getName(), xTitle, yTitle, wTitle, hTitle, Justification::centredTop, 1);
}