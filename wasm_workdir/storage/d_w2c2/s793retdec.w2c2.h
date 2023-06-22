#ifndef s793retdec_H
#define s793retdec_H

#include "w2c2_base.h"

typedef struct s793retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s793retdecInstance;

void f0(s793retdecInstance*);

void f1(s793retdecInstance*);

U32 f2(s793retdecInstance*);

void f3(s793retdecInstance*,U32);

U32 f4(s793retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s793retdecInstance*,U32,U32,U32,U32,U32);

void f6(s793retdecInstance*,U32);

void f7(s793retdecInstance*,U32,U32,U32);

void f8(s793retdecInstance*,U32,U32,U32);

void s793retdec____wasm_call_ctors(s793retdecInstance*i);

void s793retdec____wasm_apply_data_relocs(s793retdecInstance*i);

U32 s793retdec_func_1(s793retdecInstance*i);

void s793retdec_call_cb(s793retdecInstance*i,U32 l0);

void s793retdecInstantiate(s793retdecInstance* instance, void* resolve(const char* module, const char* name));

void s793retdecFreeInstance(s793retdecInstance* instance);

#endif /* s793retdec_H */

