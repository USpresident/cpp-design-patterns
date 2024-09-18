#include "express_node.h"

ExpressNode::ExpressNode()
{
    m_use = 1;
}

ExpressNode::~ExpressNode() {}

int ExpressNode::getUse() const
{
    return m_use;
}

void ExpressNode::setUse(int use)
{
    m_use = use;
}

std::ostream& operator<<(std::ostream &os, const ExpressNode &node)
{
    node.print(os);
    return os;
}