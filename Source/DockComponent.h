/*
  ==============================================================================

    DockComponent.h
    Created: 7 Sep 2014 4:12:07pm
    Author:  ChrisHome

  ==============================================================================
*/

#ifndef DOCKCOMPONENT_H_INCLUDED
#define DOCKCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "RoomoteData.h"
#include "SquareButton.h"

//==============================================================================
/*
*/

class DockComponent    : public Component
{
public:
    DockComponent(RoomoteData *appData);
    ~DockComponent();

    void paint (Graphics&);
    void resized();

private:
    void constructButtons();
    
    OwnedArray<SquareButton> buttons;
    RoomoteData* data;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DockComponent)
};


#endif  // DOCKCOMPONENT_H_INCLUDED
