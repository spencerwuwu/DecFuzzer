#ifndef s594retdec_H
#define s594retdec_H

#include "w2c2_base.h"

typedef struct s594retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s594retdecInstance;

void f0(s594retdecInstance*);

void f1(s594retdecInstance*);

U32 f2(s594retdecInstance*);

void f3(s594retdecInstance*,U32);

U32 f4(s594retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s594retdecInstance*,U32,U32,U32,U32,U32);

void f6(s594retdecInstance*,U32);

void f7(s594retdecInstance*,U32,U32,U32);

void f8(s594retdecInstance*,U32,U32,U32);

void s594retdec____wasm_call_ctors(s594retdecInstance*i);

void s594retdec____wasm_apply_data_relocs(s594retdecInstance*i);

U32 s594retdec_func_1(s594retdecInstance*i);

void s594retdec_call_cb(s594retdecInstance*i,U32 l0);

void s594retdecInstantiate(s594retdecInstance* instance, void* resolve(const char* module, const char* name));

void s594retdecFreeInstance(s594retdecInstance* instance);

#endif /* s594retdec_H */

