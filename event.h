#ifndef EVENT_H
#define EVENT_H

typedef struct Event
{
    int x, y;
    int fr, fg, fb; //Foreground colors
    int br, bg, bb; //Background colors
    char c;
} event_t;

void executeEvent(event_t e);

#endif