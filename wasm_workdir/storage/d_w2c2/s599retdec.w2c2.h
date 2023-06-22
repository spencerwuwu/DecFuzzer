#ifndef s599retdec_H
#define s599retdec_H

#include "w2c2_base.h"

typedef struct s599retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s599retdecInstance;

void f0(s599retdecInstance*);

void f1(s599retdecInstance*);

U32 f2(s599retdecInstance*);

void f3(s599retdecInstance*,U32);

U32 f4(s599retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s599retdecInstance*,U32,U32,U32,U32,U32);

void f6(s599retdecInstance*,U32);

void f7(s599retdecInstance*,U32,U32,U32);

void f8(s599retdecInstance*,U32,U32,U32);

void s599retdec____wasm_call_ctors(s599retdecInstance*i);

void s599retdec____wasm_apply_data_relocs(s599retdecInstance*i);

U32 s599retdec_func_1(s599retdecInstance*i);

void s599retdec_call_cb(s599retdecInstance*i,U32 l0);

void s599retdecInstantiate(s599retdecInstance* instance, void* resolve(const char* module, const char* name));

void s599retdecFreeInstance(s599retdecInstance* instance);

#endif /* s599retdec_H */

