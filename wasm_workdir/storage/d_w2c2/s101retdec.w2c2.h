#ifndef s101retdec_H
#define s101retdec_H

#include "w2c2_base.h"

typedef struct s101retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s101retdecInstance;

void f0(s101retdecInstance*);

void f1(s101retdecInstance*);

U32 f2(s101retdecInstance*);

void f3(s101retdecInstance*,U32);

U32 f4(s101retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s101retdecInstance*,U32,U32,U32,U32,U32);

void f6(s101retdecInstance*,U32);

void f7(s101retdecInstance*,U32,U32,U32);

void f8(s101retdecInstance*,U32,U32,U32);

void s101retdec____wasm_call_ctors(s101retdecInstance*i);

void s101retdec____wasm_apply_data_relocs(s101retdecInstance*i);

U32 s101retdec_func_1(s101retdecInstance*i);

void s101retdec_call_cb(s101retdecInstance*i,U32 l0);

void s101retdecInstantiate(s101retdecInstance* instance, void* resolve(const char* module, const char* name));

void s101retdecFreeInstance(s101retdecInstance* instance);

#endif /* s101retdec_H */

