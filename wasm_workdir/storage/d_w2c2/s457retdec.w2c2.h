#ifndef s457retdec_H
#define s457retdec_H

#include "w2c2_base.h"

typedef struct s457retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s457retdecInstance;

void f0(s457retdecInstance*);

void f1(s457retdecInstance*);

U32 f2(s457retdecInstance*);

void f3(s457retdecInstance*,U32);

U32 f4(s457retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s457retdecInstance*,U32,U32,U32,U32,U32);

void f6(s457retdecInstance*,U32);

void f7(s457retdecInstance*,U32,U32,U32);

void f8(s457retdecInstance*,U32,U32,U32);

void s457retdec____wasm_call_ctors(s457retdecInstance*i);

void s457retdec____wasm_apply_data_relocs(s457retdecInstance*i);

U32 s457retdec_func_1(s457retdecInstance*i);

void s457retdec_call_cb(s457retdecInstance*i,U32 l0);

void s457retdecInstantiate(s457retdecInstance* instance, void* resolve(const char* module, const char* name));

void s457retdecFreeInstance(s457retdecInstance* instance);

#endif /* s457retdec_H */

