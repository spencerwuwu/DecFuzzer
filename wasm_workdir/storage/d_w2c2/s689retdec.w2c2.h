#ifndef s689retdec_H
#define s689retdec_H

#include "w2c2_base.h"

typedef struct s689retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s689retdecInstance;

void f0(s689retdecInstance*);

void f1(s689retdecInstance*);

U32 f2(s689retdecInstance*);

void f3(s689retdecInstance*,U32);

U32 f4(s689retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s689retdecInstance*,U32,U32,U32,U32,U32);

void f6(s689retdecInstance*,U32);

void f7(s689retdecInstance*,U32,U32,U32);

void f8(s689retdecInstance*,U32,U32,U32);

void s689retdec____wasm_call_ctors(s689retdecInstance*i);

void s689retdec____wasm_apply_data_relocs(s689retdecInstance*i);

U32 s689retdec_func_1(s689retdecInstance*i);

void s689retdec_call_cb(s689retdecInstance*i,U32 l0);

void s689retdecInstantiate(s689retdecInstance* instance, void* resolve(const char* module, const char* name));

void s689retdecFreeInstance(s689retdecInstance* instance);

#endif /* s689retdec_H */

