#ifndef s326retdec_H
#define s326retdec_H

#include "w2c2_base.h"

typedef struct s326retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s326retdecInstance;

void f0(s326retdecInstance*);

void f1(s326retdecInstance*);

U32 f2(s326retdecInstance*);

void f3(s326retdecInstance*,U32);

U32 f4(s326retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s326retdecInstance*,U32,U32,U32,U32,U32);

void f6(s326retdecInstance*,U32);

void f7(s326retdecInstance*,U32,U32,U32);

void f8(s326retdecInstance*,U32,U32,U32);

void s326retdec____wasm_call_ctors(s326retdecInstance*i);

void s326retdec____wasm_apply_data_relocs(s326retdecInstance*i);

U32 s326retdec_func_1(s326retdecInstance*i);

void s326retdec_call_cb(s326retdecInstance*i,U32 l0);

void s326retdecInstantiate(s326retdecInstance* instance, void* resolve(const char* module, const char* name));

void s326retdecFreeInstance(s326retdecInstance* instance);

#endif /* s326retdec_H */

