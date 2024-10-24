#include <iostream>
#include "object.h"

int main(int ac, char **av)
{
    // logic
    // player
    // agent

    objectList* list = new objectList;
    EventManager* manager = new EventManager;

/*    int count = 5;
    for(int i = 0; i < count; i++)
    {
        int id = i;
        int velocity = 10 * i;
        int angular = 45 * i;
        int placeX = list->defaultPlaceX();
        int placeY = list->defaultPlaceY();*/
        int i = 2;
        list->add(i, 10 * i, 45 * i, 0, 0);
        /*qDebug() << "addObject:" << list->count();
        qDebug() << id << "," << velocity << "," << angular << "," << placeX<< "," << placeY;
    }*/

    bool isOk = manager->init(list);
    if(!isOk) return false;

    isOk = manager->execute(list);
    if(!isOk) return false;

    return 0;
}
