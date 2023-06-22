#ifndef s666retdec_H
#define s666retdec_H

#include "w2c2_base.h"

typedef struct s666retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s666retdecInstance;

void f0(s666retdecInstance*);

void f1(s666retdecInstance*);

U32 f2(s666retdecInstance*);

void f3(s666retdecInstance*,U32);

U32 f4(s666retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s666retdecInstance*,U32,U32,U32,U32,U32);

void f6(s666retdecInstance*,U32);

void f7(s666retdecInstance*,U32,U32,U32);

void f8(s666retdecInstance*,U32,U32,U32);

void s666retdec____wasm_call_ctors(s666retdecInstance*i);

void s666retdec____wasm_apply_data_relocs(s666retdecInstance*i);

U32 s666retdec_func_1(s666retdecInstance*i);

void s666retdec_call_cb(s666retdecInstance*i,U32 l0);

void s666retdecInstantiate(s666retdecInstance* instance, void* resolve(const char* module, const char* name));

void s666retdecFreeInstance(s666retdecInstance* instance);

#endif /* s666retdec_H */

