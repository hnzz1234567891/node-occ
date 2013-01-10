#pragma once
#include "NodeV8.h"
#include "OCC.h"
#include <vector>



class Solid;
class ShapeFactory {
public:
    // vertex
    static Handle<v8::Value> makeVertex(const v8::Arguments& args);
    // edges
    static Handle<v8::Value> makeLine(const v8::Arguments& args);
    static Handle<v8::Value> makeCircle(const v8::Arguments& args);
    static Handle<v8::Value> makeArc3Points(const v8::Arguments& args);
    // wires
    // faces
    // boolean operation
    static Handle<v8::Value> fuse(const v8::Arguments& args);
    static Handle<v8::Value> cut(const v8::Arguments& args);
    static Handle<v8::Value> common(const v8::Arguments& args);
    static Handle<v8::Value> add(const v8::Arguments& args);
    // primitive constructions
    static Handle<v8::Value> makeBox(const v8::Arguments& args) ;
    static Handle<v8::Value> makePrism(const Arguments& arg);
    static Handle<v8::Value> makeCylinder(const Arguments& arg);
    static Handle<v8::Value> makeCone(const Arguments& arg);
    static Handle<v8::Value> makeSphere(const Arguments& arg);
private:
    static Handle<v8::Value> _boolean(const v8::Arguments& args,BOP_Operation op);
    static Handle<v8::Object> add(const std::vector<Solid*>& solids);

};