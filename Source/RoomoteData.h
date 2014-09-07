/*
  ==============================================================================

    RoomoteData.h
    Created: 7 Sep 2014 5:31:38pm
    Author:  ChrisHome

  ==============================================================================
*/

#ifndef ROOMOTEDATA_H_INCLUDED
#define ROOMOTEDATA_H_INCLUDED

#include "JuceHeader.h"

class RoomoteData {
    
public:
    RoomoteData(const String &data, const String &theme);
    ~RoomoteData();
    
    const int getNumberOfDockItems() const;
    const String getTitleForDockItem(const int index) const;
//    const String getColourIDForDockItem(const int index) const;
//    const Colour getBackgroundColour() const;
//    const Colour getColourForKey(const String &parameter, const String &key) const;
    
private:
    StringArray dockIconNames;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoomoteData)
};

#endif  // ROOMOTEDATA_H_INCLUDED
