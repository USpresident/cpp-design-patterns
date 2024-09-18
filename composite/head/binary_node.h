#ifndef BINARY_NODE_H
#define BINARY_NODE_H

#include "express_node.h"
#include "express.h"

class BinaryNode : public ExpressNode {
public:
    BinaryNode(char opend, const Express left, const Express right);
    ~BinaryNode();

private:
    void print(std::ostream &os) const;
    int eval() const;

private:
    char m_opend;
    Express m_left;
    Express m_right;
};

#endif