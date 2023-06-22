#ifndef s891retdec_H
#define s891retdec_H

#include "w2c2_base.h"

typedef struct s891retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s891retdecInstance;

void f0(s891retdecInstance*);

void f1(s891retdecInstance*);

U32 f2(s891retdecInstance*);

void f3(s891retdecInstance*,U32);

U32 f4(s891retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s891retdecInstance*,U32,U32,U32,U32,U32);

void f6(s891retdecInstance*,U32);

void f7(s891retdecInstance*,U32,U32,U32);

void f8(s891retdecInstance*,U32,U32,U32);

void s891retdec____wasm_call_ctors(s891retdecInstance*i);

void s891retdec____wasm_apply_data_relocs(s891retdecInstance*i);

U32 s891retdec_func_1(s891retdecInstance*i);

void s891retdec_call_cb(s891retdecInstance*i,U32 l0);

void s891retdecInstantiate(s891retdecInstance* instance, void* resolve(const char* module, const char* name));

void s891retdecFreeInstance(s891retdecInstance* instance);

#endif /* s891retdec_H */

