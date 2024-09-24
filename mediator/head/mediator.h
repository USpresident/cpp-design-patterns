#ifndef MEDIATOR_H
#define MEDIATOR_H

class Colleague;

/**
 * Mediator相当于总线，负责相应同事对象间交互
 */
class Mediator {
public:
    /**
     * 对象在自身改变的时候，通知Mediator进行变更
     */
    virtual void changed(Colleague *colleague) = 0;
protected:
    Mediator();
};

#endif