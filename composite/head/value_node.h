#ifndef VALUE_NODE_H
#define VALUE_NODE_H

#include "express_node.h"

class ValueNode : public ExpressNode {
public:
    ValueNode();
    ValueNode(int val);
    ~ValueNode();

private:
    void print(std::ostream &os) const;
    int eval() const;

private:
    int m_value{0};
};


#endif