/*
  ==============================================================================

    RoomoteData.cpp
    Created: 7 Sep 2014 5:31:38pm
    Author:  ChrisHome

  ==============================================================================
*/

#include "RoomoteData.h"

RoomoteData::RoomoteData(const String &data, const String &theme)
{
    dockIconNames = StringArray();
    
    var appData;
    JSON::parse(data, appData);
    for (int i = 0; i < appData.getProperty("DockButtons", "").getArray()->size(); i++)
    {
        var dockButtonInfo = appData.getProperty("DockButtons", "")
                                .getArray()->getUnchecked(i);
        
        String buttonTitle = dockButtonInfo.getProperty("title", "NULL");
        dockIconNames.add(buttonTitle);
    }
    
    
//    JSON::parse(theme, themeData);
}

RoomoteData::~RoomoteData()
{
}

const int RoomoteData::getNumberOfDockItems() const
{
    return dockIconNames.size();
}

const String RoomoteData::getTitleForDockItem(const int index) const
{
    return dockIconNames[index];
}

