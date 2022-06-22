#ifndef VISITOR_HPP
#define VISITOR_HPP

class Visitee;

class Visitor {
public:
    virtual ~Visitor() { }
    virtual void visit(Visitee* const visitee) = 0;
};

class ConcVisitor : public Visitor {
public:
    ~ConcVisitor() { }
    void visit(Visitee* const visitee);
};

class Visitee {
    friend class Visitor;

protected:
    bool visited = false;

public:
    virtual ~Visitee() {};
    bool isVisited();
    virtual void accept(Visitor& visitor) = 0;
};

class ConcVisitee : public Visitee {
public:
    ~ConcVisitee() {};
    void accept(Visitor& visitor);
};

#endif // VISITOR_HPP