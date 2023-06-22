#ifndef s492retdec_H
#define s492retdec_H

#include "w2c2_base.h"

typedef struct s492retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s492retdecInstance;

void f0(s492retdecInstance*);

void f1(s492retdecInstance*);

U32 f2(s492retdecInstance*);

void f3(s492retdecInstance*,U32);

U32 f4(s492retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s492retdecInstance*,U32,U32,U32,U32,U32);

void f6(s492retdecInstance*,U32);

void f7(s492retdecInstance*,U32,U32,U32);

void f8(s492retdecInstance*,U32,U32,U32);

void s492retdec____wasm_call_ctors(s492retdecInstance*i);

void s492retdec____wasm_apply_data_relocs(s492retdecInstance*i);

U32 s492retdec_func_1(s492retdecInstance*i);

void s492retdec_call_cb(s492retdecInstance*i,U32 l0);

void s492retdecInstantiate(s492retdecInstance* instance, void* resolve(const char* module, const char* name));

void s492retdecFreeInstance(s492retdecInstance* instance);

#endif /* s492retdec_H */

