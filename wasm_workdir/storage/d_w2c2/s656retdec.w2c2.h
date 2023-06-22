#ifndef s656retdec_H
#define s656retdec_H

#include "w2c2_base.h"

typedef struct s656retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s656retdecInstance;

void f0(s656retdecInstance*);

void f1(s656retdecInstance*);

U32 f2(s656retdecInstance*);

void f3(s656retdecInstance*,U32);

U32 f4(s656retdecInstance*,U32,U32,U32,U32);

void f5(s656retdecInstance*,U32,U32,U32,U32,U32);

void f6(s656retdecInstance*,U32);

void f7(s656retdecInstance*,U32,U32,U32);

void f8(s656retdecInstance*,U32,U32,U32);

void s656retdec____wasm_call_ctors(s656retdecInstance*i);

void s656retdec____wasm_apply_data_relocs(s656retdecInstance*i);

U32 s656retdec_func_1(s656retdecInstance*i);

void s656retdec_call_cb(s656retdecInstance*i,U32 l0);

void s656retdecInstantiate(s656retdecInstance* instance, void* resolve(const char* module, const char* name));

void s656retdecFreeInstance(s656retdecInstance* instance);

#endif /* s656retdec_H */

