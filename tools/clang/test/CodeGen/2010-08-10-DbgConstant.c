// RUN: %clang_cc1 -S -emit-llvm -g  %s -o - | FileCheck %s
// CHECK: !MDGlobalVariable(

static const unsigned int ro = 201;
void bar(int);
void foo() { bar(ro); }
