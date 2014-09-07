/*
  ==============================================================================

    SquareButton.h
    Created: 7 Sep 2014 4:11:52pm
    Author:  ChrisHome

  ==============================================================================
*/

#ifndef SQUAREBUTTON_H_INCLUDED
#define SQUAREBUTTON_H_INCLUDED

#include "JuceHeader.h"

class SquareButton : public Button
{
    
public:
    SquareButton(const String &name);
    ~SquareButton();
    
protected:
    void paintButton(Graphics& g, bool isMouseOverButton,bool isButtonDown);
    
};



#endif  // SQUAREBUTTON_H_INCLUDED
