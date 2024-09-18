#ifndef EXPRESS_H
#define EXPRESS_H

#include "express_node.h"

class Express {
public:
    Express(int val); // UnaryNode
    Express(char c, const Express val); // UnaryNode(char, int) Express('+',t,12)
    Express(char c, const Express val1, const Express val2); // BinaryNode(char, int, int) Express('+',3,4)
    Express(const Express &expr);
    Express& operator=(const Express&);
    ~Express();
    friend std::ostream& operator<<(std::ostream &os, const Express &expr);
    int eval() const;

private:
    class ExpressNode *m_node{nullptr};
};

#endif