#ifndef EXPRESS_NODE_H
#define EXPRESS_NODE_H

#include <ostream>

class ExpressNode {
public:
    virtual ~ExpressNode();

    friend class Express;
    int getUse() const;
    void setUse(int use);
    friend std::ostream& operator<<(std::ostream &os, const ExpressNode &node);

protected:
    ExpressNode();
    virtual void print(std::ostream &os) const = 0;
    virtual int eval() const = 0;

private:
    int m_use;
};

#endif