#ifndef s982retdec_H
#define s982retdec_H

#include "w2c2_base.h"

typedef struct s982retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s982retdecInstance;

void f0(s982retdecInstance*);

void f1(s982retdecInstance*);

U32 f2(s982retdecInstance*);

void f3(s982retdecInstance*,U32);

U32 f4(s982retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s982retdecInstance*,U32,U32,U32,U32,U32);

void f6(s982retdecInstance*,U32);

void f7(s982retdecInstance*,U32,U32,U32);

void f8(s982retdecInstance*,U32,U32,U32);

void s982retdec____wasm_call_ctors(s982retdecInstance*i);

void s982retdec____wasm_apply_data_relocs(s982retdecInstance*i);

U32 s982retdec_func_1(s982retdecInstance*i);

void s982retdec_call_cb(s982retdecInstance*i,U32 l0);

void s982retdecInstantiate(s982retdecInstance* instance, void* resolve(const char* module, const char* name));

void s982retdecFreeInstance(s982retdecInstance* instance);

#endif /* s982retdec_H */

