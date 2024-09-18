#include "unary_node.h"
#include <cassert>

UnaryNode::UnaryNode(char c, const Express expr) : m_left(expr)
{
    m_opend = c;
    // m_left = expr; // 这行需要 Express 有默认构筑函数
}

void UnaryNode::print(std::ostream &os) const
{
    os << "(" << m_opend << m_left << ")";
}

int UnaryNode::eval() const
{
    assert(m_opend == '-');
    return (-1) * m_left.eval();
}