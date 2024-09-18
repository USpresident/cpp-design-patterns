#include "binary_node.h"

BinaryNode::BinaryNode(char opend, const Express left, const Express right)
    : m_opend(opend), m_left(left), m_right(right)
{}

BinaryNode::~BinaryNode() {}

void BinaryNode::print(std::ostream &os) const
{
    os << "(" << m_left << m_opend << m_right << ")";
}

int BinaryNode::eval() const
{
    int op1 = m_left.eval();
    int op2 = m_right.eval();

    if (m_opend == '+') {
        return op1 + op2;
    }

    if (m_opend == '-') {
        return op1 - op2;
    }

    if (m_opend == '*') {
        return op1 * op2;
    }

    if ((m_opend == '/') && (op2 != 0)) {
        return op1 / op2;
    }

    // 异常
    return 0;
}