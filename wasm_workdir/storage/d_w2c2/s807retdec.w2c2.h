#ifndef s807retdec_H
#define s807retdec_H

#include "w2c2_base.h"

typedef struct s807retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s807retdecInstance;

void f0(s807retdecInstance*);

void f1(s807retdecInstance*);

U32 f2(s807retdecInstance*);

void f3(s807retdecInstance*,U32);

U32 f4(s807retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s807retdecInstance*,U32,U32,U32,U32,U32);

void f6(s807retdecInstance*,U32);

void f7(s807retdecInstance*,U32,U32,U32);

void f8(s807retdecInstance*,U32,U32,U32);

void s807retdec____wasm_call_ctors(s807retdecInstance*i);

void s807retdec____wasm_apply_data_relocs(s807retdecInstance*i);

U32 s807retdec_func_1(s807retdecInstance*i);

void s807retdec_call_cb(s807retdecInstance*i,U32 l0);

void s807retdecInstantiate(s807retdecInstance* instance, void* resolve(const char* module, const char* name));

void s807retdecFreeInstance(s807retdecInstance* instance);

#endif /* s807retdec_H */

