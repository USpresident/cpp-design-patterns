#include "value_node.h"

ValueNode::ValueNode() {}

ValueNode::ValueNode(int val)
{
    m_value = val;
}

ValueNode::~ValueNode() {}

void ValueNode::print(std::ostream &os) const
{
    os << m_value;
}
int ValueNode::eval() const
{
    return m_value;
}