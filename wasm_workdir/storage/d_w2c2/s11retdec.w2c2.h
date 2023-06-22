#ifndef s11retdec_H
#define s11retdec_H

#include "w2c2_base.h"

typedef struct s11retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s11retdecInstance;

void f0(s11retdecInstance*);

void f1(s11retdecInstance*);

U32 f2(s11retdecInstance*);

void f3(s11retdecInstance*,U32);

U32 f4(s11retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s11retdecInstance*,U32,U32,U32,U32,U32);

void f6(s11retdecInstance*,U32);

void f7(s11retdecInstance*,U32,U32,U32);

void f8(s11retdecInstance*,U32,U32,U32);

void s11retdec____wasm_call_ctors(s11retdecInstance*i);

void s11retdec____wasm_apply_data_relocs(s11retdecInstance*i);

U32 s11retdec_func_1(s11retdecInstance*i);

void s11retdec_call_cb(s11retdecInstance*i,U32 l0);

void s11retdecInstantiate(s11retdecInstance* instance, void* resolve(const char* module, const char* name));

void s11retdecFreeInstance(s11retdecInstance* instance);

#endif /* s11retdec_H */

