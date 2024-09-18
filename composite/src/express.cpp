#include "express.h"
#include "value_node.h"
#include "unary_node.h"
#include "binary_node.h"

#include <iostream>

Express::Express(int val)
{
    m_node = new ValueNode(val);
    std::cout << "ValueNode" << std::endl;
}

Express::Express(char c, const Express expr)
{
    m_node = new UnaryNode(c, expr);
    std::cout << "UnaryNode" << std::endl;
}

Express::Express(char c, const Express expr1, const Express expr2)
{
    m_node = new BinaryNode(c, expr1, expr2);
    std::cout << "BinaryNode" << std::endl;
}

Express::Express(const Express &expr)
{
    m_node = expr.m_node;
    m_node->setUse(m_node->getUse() + 1);
}

Express& Express::operator=(const Express &expr)
{
    expr.m_node->setUse(expr.m_node->getUse() + 1);
    m_node->setUse(m_node->getUse() - 1);
    if (m_node->getUse() == 0) {
        delete m_node;
    }

    m_node = expr.m_node;
    return *this;
}

Express::~Express()
{
    m_node->setUse(m_node->getUse() - 1);
    if (m_node->getUse() == 0) {
        delete m_node;
    }
}

int Express::eval() const
{
    return m_node->eval();
}

std::ostream& operator<<(std::ostream &os, const Express &expr)
{
    os << *(expr.m_node);
    return os;
}
