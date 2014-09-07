/*
  ==============================================================================

    DockComponent.cpp
    Created: 7 Sep 2014 4:12:07pm
    Author:  ChrisHome

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "DockComponent.h"

//==============================================================================
DockComponent::DockComponent(RoomoteData *appData)
: data(appData)
{
    constructButtons();
}

DockComponent::~DockComponent()
{
    data = nullptr;
}

void DockComponent::constructButtons()
{
    buttons.clear();
    for (int i = 0; i < data->getNumberOfDockItems(); i++)
    {
        String name = data->getTitleForDockItem(i);
        SquareButton *newButton = new SquareButton(name);
        addAndMakeVisible(newButton);
        buttons.add(newButton);
    }
}


void DockComponent::paint (Graphics& g)
{
}

void DockComponent::resized()
{
    int margin = 2;
    int sideMargin = (getWidth()
                        - ((buttons.size() - 1) * margin)
                        - (buttons.size() * getHeight()))
                        / 2;
    
    int xButton = sideMargin;
    int yButton = 0;
    int wButton = getHeight();
    int hButton = getHeight();
    
    for (int i = 0; i < buttons.size(); i++)
    {
        buttons[i]->setBounds(xButton, yButton, wButton, hButton);
        xButton += wButton + margin;
    }
}
