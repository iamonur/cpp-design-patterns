#include <Visitor.hpp>

void ConcVisitor::visit(Visitee* const visitee)
{
    return;
}

bool Visitee::isVisited()
{
    return visited;
}

void ConcVisitee::accept(Visitor& visitor)
{
    visitor.visit(this);
    visited = true;
}