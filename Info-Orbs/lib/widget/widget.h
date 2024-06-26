#ifndef WIDGET_H
#define WIDGET_H

#include <screenManager.h>

class Widget {
public:
    Widget(ScreenManager& manager);
    virtual ~Widget() = default;
    virtual void setup() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;

protected:
    ScreenManager& m_manager;
};
#endif // WIDGET_H