#ifndef UNARY_NODE_H
#define UNARY_NODE_H

#include "express_node.h"
#include "express.h"

class UnaryNode : public ExpressNode {
public:
    UnaryNode(char c, const Express expr);

private:
    void print(std::ostream &os) const;
    int eval() const;

private:
    char m_opend;
    Express m_left;
};

#endif