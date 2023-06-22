#ifndef s931retdec_H
#define s931retdec_H

#include "w2c2_base.h"

typedef struct s931retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s931retdecInstance;

void f0(s931retdecInstance*);

void f1(s931retdecInstance*);

U32 f2(s931retdecInstance*);

void f3(s931retdecInstance*,U32);

U32 f4(s931retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s931retdecInstance*,U32,U32,U32,U32,U32);

void f6(s931retdecInstance*,U32);

void f7(s931retdecInstance*,U32,U32,U32);

void f8(s931retdecInstance*,U32,U32,U32);

void s931retdec____wasm_call_ctors(s931retdecInstance*i);

void s931retdec____wasm_apply_data_relocs(s931retdecInstance*i);

U32 s931retdec_func_1(s931retdecInstance*i);

void s931retdec_call_cb(s931retdecInstance*i,U32 l0);

void s931retdecInstantiate(s931retdecInstance* instance, void* resolve(const char* module, const char* name));

void s931retdecFreeInstance(s931retdecInstance* instance);

#endif /* s931retdec_H */

