#include <ClassAdapter.hpp>

TargetInterface::~TargetInterface() { }

void Adaptee::irregularInterfaceMethod() { }

void Adapter::operate() { irregularInterfaceMethod(); }
