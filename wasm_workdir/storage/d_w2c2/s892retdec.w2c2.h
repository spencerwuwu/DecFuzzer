#ifndef s892retdec_H
#define s892retdec_H

#include "w2c2_base.h"

typedef struct s892retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s892retdecInstance;

void f0(s892retdecInstance*);

void f1(s892retdecInstance*);

U32 f2(s892retdecInstance*);

void f3(s892retdecInstance*,U32);

U32 f4(s892retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s892retdecInstance*,U32,U32,U32,U32,U32);

void f6(s892retdecInstance*,U32);

void f7(s892retdecInstance*,U32,U32,U32);

void f8(s892retdecInstance*,U32,U32,U32);

void s892retdec____wasm_call_ctors(s892retdecInstance*i);

void s892retdec____wasm_apply_data_relocs(s892retdecInstance*i);

U32 s892retdec_func_1(s892retdecInstance*i);

void s892retdec_call_cb(s892retdecInstance*i,U32 l0);

void s892retdecInstantiate(s892retdecInstance* instance, void* resolve(const char* module, const char* name));

void s892retdecFreeInstance(s892retdecInstance* instance);

#endif /* s892retdec_H */

