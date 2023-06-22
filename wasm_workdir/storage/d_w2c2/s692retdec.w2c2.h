#ifndef s692retdec_H
#define s692retdec_H

#include "w2c2_base.h"

typedef struct s692retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s692retdecInstance;

void f0(s692retdecInstance*);

void f1(s692retdecInstance*);

U32 f2(s692retdecInstance*);

void f3(s692retdecInstance*,U32);

U32 f4(s692retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s692retdecInstance*,U32,U32,U32,U32,U32);

void f6(s692retdecInstance*,U32);

void f7(s692retdecInstance*,U32,U32,U32);

void f8(s692retdecInstance*,U32,U32,U32);

void s692retdec____wasm_call_ctors(s692retdecInstance*i);

void s692retdec____wasm_apply_data_relocs(s692retdecInstance*i);

U32 s692retdec_func_1(s692retdecInstance*i);

void s692retdec_call_cb(s692retdecInstance*i,U32 l0);

void s692retdecInstantiate(s692retdecInstance* instance, void* resolve(const char* module, const char* name));

void s692retdecFreeInstance(s692retdecInstance* instance);

#endif /* s692retdec_H */

