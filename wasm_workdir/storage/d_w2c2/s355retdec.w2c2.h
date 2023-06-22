#ifndef s355retdec_H
#define s355retdec_H

#include "w2c2_base.h"

typedef struct s355retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s355retdecInstance;

void f0(s355retdecInstance*);

void f1(s355retdecInstance*);

U32 f2(s355retdecInstance*);

void f3(s355retdecInstance*,U32);

U32 f4(s355retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s355retdecInstance*,U32,U32,U32,U32,U32);

void f6(s355retdecInstance*,U32);

void f7(s355retdecInstance*,U32,U32,U32);

void f8(s355retdecInstance*,U32,U32,U32);

void s355retdec____wasm_call_ctors(s355retdecInstance*i);

void s355retdec____wasm_apply_data_relocs(s355retdecInstance*i);

U32 s355retdec_func_1(s355retdecInstance*i);

void s355retdec_call_cb(s355retdecInstance*i,U32 l0);

void s355retdecInstantiate(s355retdecInstance* instance, void* resolve(const char* module, const char* name));

void s355retdecFreeInstance(s355retdecInstance* instance);

#endif /* s355retdec_H */

