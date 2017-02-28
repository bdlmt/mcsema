/* Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved. */

#ifndef MCSEMA_BC_DEADREGELIMINATION_H_
#define MCSEMA_BC_DEADREGELIMINATION_H_

namespace llvm {
class Function;
class Module;
}

void InitDeadRegisterEliminator(llvm::Module *module);

void OptimizeFunction(llvm::Function *func);

#endif  // MCSEMA_BC_DEADREGELIMINATION_H_