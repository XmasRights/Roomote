/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainContentComponent::MainContentComponent()
{
    data = new RoomoteData(String(BinaryData::appConfig_json, BinaryData::appConfig_jsonSize),
                           String(BinaryData::themes_json, BinaryData::themes_jsonSize));
    
    dock = new DockComponent(data);
    addAndMakeVisible(dock);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour::fromRGB(233, 233, 233));
}

void MainContentComponent::resized()
{
    int xDock = 0;
    int yDock = 0;
    int wDock = getWidth();
    int hDock = 77;
    
    dock->setBounds(xDock, yDock, wDock, hDock);
}
