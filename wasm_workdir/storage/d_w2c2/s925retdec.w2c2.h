#ifndef s925retdec_H
#define s925retdec_H

#include "w2c2_base.h"

typedef struct s925retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s925retdecInstance;

void f0(s925retdecInstance*);

void f1(s925retdecInstance*);

U32 f2(s925retdecInstance*);

void f3(s925retdecInstance*,U32);

U32 f4(s925retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s925retdecInstance*,U32,U32,U32,U32,U32);

void f6(s925retdecInstance*,U32);

void f7(s925retdecInstance*,U32,U32,U32);

void f8(s925retdecInstance*,U32,U32,U32);

void s925retdec____wasm_call_ctors(s925retdecInstance*i);

void s925retdec____wasm_apply_data_relocs(s925retdecInstance*i);

U32 s925retdec_func_1(s925retdecInstance*i);

void s925retdec_call_cb(s925retdecInstance*i,U32 l0);

void s925retdecInstantiate(s925retdecInstance* instance, void* resolve(const char* module, const char* name));

void s925retdecFreeInstance(s925retdecInstance* instance);

#endif /* s925retdec_H */

