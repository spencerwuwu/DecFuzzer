#ifndef s641retdec_H
#define s641retdec_H

#include "w2c2_base.h"

typedef struct s641retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s641retdecInstance;

void f0(s641retdecInstance*);

void f1(s641retdecInstance*);

U32 f2(s641retdecInstance*);

void f3(s641retdecInstance*,U32);

U32 f4(s641retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s641retdecInstance*,U32,U32,U32,U32,U32);

void f6(s641retdecInstance*,U32);

void f7(s641retdecInstance*,U32,U32,U32);

void f8(s641retdecInstance*,U32,U32,U32);

void s641retdec____wasm_call_ctors(s641retdecInstance*i);

void s641retdec____wasm_apply_data_relocs(s641retdecInstance*i);

U32 s641retdec_func_1(s641retdecInstance*i);

void s641retdec_call_cb(s641retdecInstance*i,U32 l0);

void s641retdecInstantiate(s641retdecInstance* instance, void* resolve(const char* module, const char* name));

void s641retdecFreeInstance(s641retdecInstance* instance);

#endif /* s641retdec_H */

