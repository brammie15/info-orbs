#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H

#include <widget.h>
#include <globalTime.h>

class ClockWidget : public Widget {
public:
    ClockWidget(ScreenManager& manager);
    ~ClockWidget() override;
    void setup() override;
    void update() override;
    void draw() override;
private:

    void displayDidget(int displayIndex, const String& didget, int font, int fontSize, uint32_t color, bool shadowing);
    void displayDidget(int displayIndex, const String& didget, int font, int fontSize, uint32_t color);
    void displaySeconds(int displayIndex, int seconds, int color);

    time_t m_unixEpoch;
    int m_timeZoneOffset;

    // WiFiUDP m_udp;
    // NTPClient* m_timeClient{ nullptr };

    int m_minuteSingle;
    int m_hourSingle;
    int m_secondSingle;

    int m_lastMinuteSingle;
    int m_lastHourSingle;
    int m_lastSecondSingle;

    // Didgets
    String m_display1Didget;
    String m_lastDisplay1Didget{ "-1" };    
    String m_display2Didget;
    String m_lastDisplay2Didget{ "-1" };
    //Display 3 is : 
    String m_display4Didget;
    String m_lastDisplay4Didget{ "-1" };
    String m_display5Didget;
    String m_lastDisplay5Didget{ "-1" };
};
#endif // CLOCKWIDGET_H